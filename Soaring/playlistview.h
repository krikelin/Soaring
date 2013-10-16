#ifndef PLAYLISTVIEW_H
#define PLAYLISTVIEW_H
#include "spview.h"
#include "sphomepage.h"
class PlaylistView : public SPView
{
public:
    explicit PlaylistView(QWidget *parent = 0);
    /**
     * @brief argumentsChanged
     * @param arguments
     */
    virtual void argumentsChanged(const QStringList& arguments);
    virtual QString title() { return QString("Internal"); }
    virtual SPPage* loadNewPage(const QString &resource);
};

#endif // PLAYLISTVIEW_H
