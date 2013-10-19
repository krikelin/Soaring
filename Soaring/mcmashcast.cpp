#include "mcmashcast.h"
#include <QStringList>

MCMashcast::MCMashcast(QObject *parent) {
}

void MCMashcast::downloadChannels() {
    QNetworkAccessManager * manager = new QNetworkAccessManager(this);
    MCMashcast::connect(manager, SIGNAL(finished(QNetworkReply*)), (MCMashcast *)this, SLOT(fileIsReady(QNetworkReply*)) );
    manager->get(QNetworkRequest(QUrl("http://static.cobresia.webfactional.com/mashcast/channels.txt")));
}

void MCMashcast::fileIsReady(QNetworkReply *reply) {
    QString list = QString(reply->readAll());
    QStringList rows = list.split("\n");
    for(QStringList::Iterator it = rows.begin(); it != rows.end(); ++it) {
        QString row = *it;
        QStringList parts = row.split(" ");
        QString title = parts.at(0);
        QString uri = parts.at(1);
        MCChannel *channel = new MCChannel(title, uri);
        this->channels()->append(channel);
    }
    emit channelListLoaded(*this->channels());
}
