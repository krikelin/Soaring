#ifndef MCSTREAMER_H
#define MCSTREAMER_H

#include <QObject>
#include "mashcast.h"
#include "mcresource.h"
class MCStreamer : public MCResource
{
    Q_OBJECT
public:

    explicit MCStreamer( QObject *parent = 0);
    explicit MCStreamer(QString title, QString uri, QObject *parent = 0);
    virtual void play(double position = 0) {}
    virtual void stop() {}
    int volume() {
        return m_volume;
    }
    int maxVolume() {
        return m_maxVolume;
    }
    virtual void fadeOut() {}
    virtual void seek(double position) {}

signals:
    void positionChanged(int newPosition);
    void radioProgramEnded();
public slots:
private:
        int m_volume;
        int m_maxVolume;
};
#include "mashcast_includes.h"
#endif // MCSTREAMER_H
