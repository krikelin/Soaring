#ifndef MCSCROBBLER_H
#define MCSCROBBLER_H

#include <QObject>
#include <QTimer>
#include "mashcast.h"
#include "mcresource.h"

class MCScrobbler : public MCResource
{
    Q_OBJECT
public:
    explicit MCScrobbler(QObject *parent = 0);
    explicit MCScrobbler(QString title, QString uri, QObject *parent = 0);
    void start();
    void stop();
    bool enabled();
    void setEnabled(bool value);
    void playProgram(MCResource *resource, int position);
    void playProgram(MCResource *resource);
    void stopProgram();
    void startScrobbler();
    void scrobble();

    QList<MCPlayer *> players() {
        return m_players;
    }
    QList<MCStreamer *> streamers() {
        return m_streamers;
    }

    MCChannel *playlist() {
        return m_playlist;
    }

signals:
    void programPositionChanged();

public slots:
private:
    MCChannel *m_playlist;
    MCPlayer *m_currentPlayer;
    MCStreamer *m_currentStreamer;
    QTimer *m_playTimer;
    QTimer *m_timer;
    QList<MCPlayer *> m_players;
    QList<MCStreamer *> m_streamers;
};
#include "mashcast_includes.h"
#endif // MCSCROBBLER_H
