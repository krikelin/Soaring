#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H
#include "sppage.h"
#include <QScrollArea>
#include "spiderpage.h"
#include <QTreeWidget>
class PlaylistPage : public SPPage
{
    Q_OBJECT
public:
    explicit PlaylistPage(QWidget *parent = 0);

signals:

public slots:
private:
    QTreeWidget *m_treeView;
    QScrollArea *m_scrollView;
    SpiderPage *m_header;
};

#endif // PLAYLISTPAGE_H
