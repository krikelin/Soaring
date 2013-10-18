#ifndef PLAYLISTVIEW_H
#define PLAYLISTVIEW_H
#include "soaring.h"
#include "spview.h"
class PlaylistView : public SPView
{
public:
    explicit PlaylistView(MainWindow *mainWindow, QWidget *parent = 0);
    /**
     * @brief argumentsChanged
     * @param arguments
     */
    virtual void argumentsChanged(const QStringList& arguments);
    virtual QString title() { return QString("Internal"); }
    virtual SPPage* loadNewPage(const QString &resource);
};
#include "soaring_includes.h"
#endif // PLAYLISTVIEW_H
