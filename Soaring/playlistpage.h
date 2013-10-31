#ifndef PLAYLISTPAGE_H
#define PLAYLISTPAGE_H
#include "soaring.h"
#include <QScrollArea>
#include "sppage.h"
#include "luabind/luabind.hpp"
class PlaylistPage : public SPPage
{
    Q_OBJECT
public:
    explicit PlaylistPage(SPView *mainView, QWidget *parent = 0);
    SpiderPage *header() {
        return m_header;
    }
    luabind::object *getToken() {
        return m_token;
    }
    void setToken(luabind::object *token) {
        m_token = token;
    }

signals:

public slots:
private:
    QTreeWidget *m_treeView;
    QScrollArea *m_scrollView;
    SpiderPage *m_header;

    luabind::object *m_token;
};

#include "soaring_includes.h"
#endif // PLAYLISTPAGE_H
