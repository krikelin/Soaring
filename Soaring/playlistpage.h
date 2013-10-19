#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H
#include "soaring.h"
#include <QScrollArea>
#include "sppage.h"
class PlaylistPage : public SPPage
{
    Q_OBJECT
public:
    explicit PlaylistPage(SPView *mainView, QWidget *parent = 0);
    SpiderPage *header() {
        return m_header;
    }

signals:

public slots:
private:
    QTreeWidget *m_treeView;
    QScrollArea *m_scrollView;
    SpiderPage *m_header;
};

#include "soaring_includes.h"
#endif // PLAYLISTPAGE_H
