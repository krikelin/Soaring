#ifndef MCPLAYER_H
#define MCPLAYER_H

#include <QObject>
#include "mashcast.h"
#include "mcstreamer.h"
/**
 * @brief The MCPlayer class
 */
class MCPlayer : public MCResource
{
    Q_OBJECT
public:
    explicit MCPlayer(QString title, QString uri, QObject *parent = 0);
    virtual void pause() {}
    virtual void play() {}
    virtual void fadeIn(){}
    virtual void load(QString url) {}
    virtual void fadeOut() {}
    virtual double volume() { return 0; }
    virtual int maxVolume() { return 0; }
signals:
    void playerStopped();
    void positionChanged(int newPosition);
public slots:
private:

};
#include <mashcast_includes.h>

#endif // MCPLAYER_H
