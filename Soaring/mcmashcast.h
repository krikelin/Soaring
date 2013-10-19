#ifndef MCMASHCAST_H
#define MCMASHCAST_H

#include <QObject>
#include "mashcast.h"
#include "mcchannel.h"
Q_DECLARE_METATYPE(QList<MCChannel *>)
class MCMashcast : public QObject {
    Q_OBJECT
public:
    explicit MCMashcast(QObject *parent = 0);
    void downloadChannels();
    QList<MCChannel *> *channels() {
        return &m_channels;
    }
signals:
    void channelListLoaded(QList<MCChannel *>);
public slots:
    void fileIsReady(QNetworkReply *);
private:
    QList<MCChannel *> m_channels;
};
#include "mashcast_includes.h"

#endif // MCMASHCAST_H
