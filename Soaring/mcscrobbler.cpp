#include "mcscrobbler.h"

MCScrobbler::MCScrobbler(QString title, QString uri, QObject *parent) :
    MCResource(title, uri, parent)
{
    m_timer = new QTimer(this);

}

void MCScrobbler::start() {
    m_timer->start();
}
void MCScrobbler::stop() {
    m_timer->stop();
}

bool MCScrobbler::enabled() {
    return m_timer->isActive();
}

