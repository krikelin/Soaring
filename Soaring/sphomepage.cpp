#include "sphomepage.h"
#include <QScrollArea>
SPHomePage::SPHomePage(SPView *mainView, QWidget *parent) :
    SPPage(mainView, parent)
{
    m_spiderPage = new SpiderPage(this, this);
    QScrollArea *scrollArea = new QScrollArea(this);
    luabind::object obj = luabind::newtable(    m_spiderPage->spider()->luaState());
         (obj)["title"] = ("joy");
    m_spiderPage->setPage(":/views/boxmodel_start.xml", &obj);
    scrollArea->setWidget(m_spiderPage);
    scrollArea->setLayout(new QGridLayout(this));
    scrollArea->setWidgetResizable(true);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    m_spiderPage->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->tabWidget()->addTab(scrollArea, QString("Home"));

    return;
}
