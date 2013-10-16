#include "playlistview.h"

PlaylistView::PlaylistView(QWidget *parent)
    : SPView(parent)
{
    // Add overview

}
void PlaylistView::argumentsChanged(const QStringList &arguments) {
    QString resource = arguments.at(0);
    if (resource == QString("home"))
    loadPage(resource);
}

SPPage* PlaylistView::loadNewPage(const QString &resource) {
    qDebug("Test");
    SPPage *result;
    if(resource == QString("home")) {
        result = new SPHomePage(this);
    }
    return result;
}
