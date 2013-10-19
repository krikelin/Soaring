#ifndef MCMEDIASTREAMER_H
#define MCMEDIASTREAMER_H

#include "mashcast.h"
#include "mcstreamer.h"
#include <QMultimedia>
#include <QMediaPlayer>
#include <QMediaPlaylist>
class MCMediaStreamer : public MCStreamer
{
    Q_OBJECT
public:
    explicit MCMediaStreamer(QString title, QString uri, QObject *parent = 0);
    QMediaPlayer *mediaPlayer() {
        return m_mediaPlayer;
    }

signals:

public slots:
private:
    QMediaPlayer *m_mediaPlayer;
};
#include "mashcast_includes.h"
#endif // MCMEDIASTREAMER_H
