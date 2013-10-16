#include "sphomepage.h"
#include <QScrollArea>
SPHomePage::SPHomePage(QWidget *parent) :
    SPPage(parent)
{
    QScrollArea *scrollArea = new QScrollArea(this);
    m_spiderPage = new SpiderPage(this);
    m_spiderPage->setPage(":/views/boxmodel_start.xml");
    scrollArea->setWidget(m_spiderPage);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    m_spiderPage->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->tabWidget()->addTab(scrollArea, QString("Home"));

    return;
}
