#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H
#include "sppage.h"
#include <QTreeView>
class PlaylistPage : public SPPage
{
    Q_OBJECT
public:
    explicit PlaylistPage(QWidget *parent = 0);

signals:

public slots:
private:
    QTreeView *m_treeView;
};

#endif // PLAYLISTPAGE_H
