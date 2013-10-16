#include "spview.h"

SPView::SPView(QWidget *parent) :
    QFrame(parent)
{

    m_pages = new QMap<QString, SPPage *>();
    QHBoxLayout *boxLayout = new QHBoxLayout( this );
    boxLayout->setMargin(0);

    boxLayout->setSpacing(0);
    adjustSize();
    this->setLayout(boxLayout);
}

SPPage* SPView::loadPage(const QString &resource) {
    SPPage *page = (*this->m_pages)[resource];
    if (page == NULL) {

        page = this->loadNewPage(resource);
        (*this->m_pages)[resource] = page;
        QVBoxLayout *layout = (QVBoxLayout *)this->layout();
        if(layout != NULL) {
            layout->addWidget(page);
        }
    }
    for(QMap<QString, SPPage *>::Iterator it = this->m_pages->begin(); it != m_pages->end(); ++it) {
        bool visible = it.key() == resource;
        SPPage *tpage = it.value();
        tpage->setVisible(visible);
    }
    page->setVisible(true);
    return page;

}

void SPView::argumentsChanged(const QStringList &arguments) {
    QString resource = arguments.at(0);
    SPPage *page = loadPage(resource);
    for (QMap<QString, SPPage *>::Iterator it = this->pages()->begin(); it != this->pages()->end(); ++it) {
        QString key = it.key();
        SPPage* val = it.value();
        if(QString::compare(resource, key)) {
            val->show();
        } else {
            val->hide();
        }
    }
}

QMap<QString, SPPage *> *SPView::pages() {
    return m_pages;
}
