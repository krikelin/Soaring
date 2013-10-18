#include "sphomepage.h"
#include <QScrollArea>
SPHomePage::SPHomePage(SPView *mainView, QWidget *parent) :
    SPPage(mainView, parent)
{
    QScrollArea *scrollArea = new QScrollArea(this);

    m_spiderPage = new SpiderPage(this, this);
    m_spiderPage->setPage(":/views/boxmodel_start.xml");
    scrollArea->setWidget(m_spiderPage);
    scrollArea->setLayout(new QGridLayout(this));
    scrollArea->setWidgetResizable(true);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    m_spiderPage->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this->tabWidget()->addTab(scrollArea, QString("Home"));

    return;
}
