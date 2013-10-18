#include "playlistview.h"
PlaylistView::PlaylistView(MainWindow *mainWindow, QWidget *parent)
    : SPView(mainWindow, parent)
{
    // Add overview

}
void PlaylistView::argumentsChanged(const QStringList &arguments) {
    QString resource = arguments.at(0);
    //if (resource == QString("home"))
    loadPage(resource);
}

SPPage* PlaylistView::loadNewPage(const QString &resource) {
    qDebug("Test");
    SPPage *result;
    result = new PlaylistPage(this);

    return result;
}
