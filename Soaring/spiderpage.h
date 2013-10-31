#ifndef H_SPIDERPAGE_
#define H_SPIDERPAGE_

#include "soaring.h"
#include "lua.h"
#include "luabind/luabind.hpp"
#include <QString>
#include <QDomDocument>
class SpiderPage : public QWidget
{
    Q_OBJECT
public:
    explicit SpiderPage(SPPage *mainPage, QWidget *parent);

    void setDocument(QString document);
    void setPage(QString fileName, luabind::object *lua_data);
    QWidget *makeElement(QDomElement& elm, QWidget *parent);
    MainWindow *mainWindow() {
        return m_mainWindow;
    }
    SPPage *mainPage() {
        return m_mainPage;
    }
    SPView *mainView() {
        return m_mainView;
    }
    spider::Spider *spider() {
        return m_spider;
    }

signals:

public slots:
    void uriMouseClicked(QMouseEvent *);
    void linkActivated(QString link);

private:
    QDomDocument *m_domDocument;
    SPView *m_mainView;
    MainWindow *m_mainWindow;
    SPPage *m_mainPage;
    spider::Spider *m_spider;

};
#include "soaring_includes.h"

#endif // SPIDERPAGE_H
