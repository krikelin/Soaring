#ifndef MCEPISODE_H
#define MCEPISODE_H

#include <QObject>
#include <QDateTime>
#include "mashcast.h"
#include "mcchannel.h"
#include "mcresource.h"
class MCEpisode : public MCResource
{
    Q_OBJECT
public:
    explicit MCEpisode(QString title, QString uri, QObject *parent = 0);
    QDateTime startDate() {
        return m_startDate;
    }
    QDateTime endDate() {
        return m_endDate;
    }

signals:

public slots:
private:
    MCChannel *m_channel;
    QDateTime m_startDate;
     QDateTime m_endDate;
};
#include "mashcast_includes.h"
#endif // MCEPISODE_H
