#include "sppage.h"

SPPage::SPPage(QWidget *parent) :
    QWidget(parent)
{

    m_boxLayout = new QVBoxLayout(this);
    m_boxLayout->setSpacing(0);
    m_boxLayout->setMargin(0);
    m_tabWidget = new QTabWidget(this);
    this->setLayout(m_boxLayout);
    m_boxLayout->addWidget(m_tabWidget);

}
QTabWidget *SPPage::tabWidget() {
    return m_tabWidget;
}

SPPage::~SPPage() {
    delete m_tabWidget;
    delete m_boxLayout;
}
