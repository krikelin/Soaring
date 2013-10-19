#ifndef MCCHANNEL_H
#define MCCHANNEL_H

#include <QObject>
#include <QDomDocument>
#include "mashcast.h"
#include "mcresource.h"
#include "mcepisode.h"
class MCChannel : public MCResource
{
    Q_OBJECT
public:
    explicit MCChannel(QObject *parent = 0);
    explicit MCChannel(QString title, QString uri, QObject *parent = 0);
    QList<MCEpisode *> pisodes() {
        return m_episodes;
    }

signals:
public slots:
private:
    QString m_title;
    QList<MCEpisode *> m_episodes;
    QDomDocument *data;

};
#include "mashcast_includes.h"
#endif // MCCHANNEL_H
