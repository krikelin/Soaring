#include "mcmediastreamer.h"

MCMediaStreamer::MCMediaStreamer(QString title, QString uri, QObject *parent) :
    MCStreamer(title, uri, parent)
{
    m_mediaPlayer = new QMediaPlayer;
    QMediaPlaylist *playlist = new QMediaPlaylist(m_mediaPlayer);


}
