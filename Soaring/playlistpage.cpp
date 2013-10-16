#include "playlistpage.h"

PlaylistPage::PlaylistPage(QWidget *parent) :
    SPPage(parent)
{
    this->m_scrollView = new QScrollArea();
    this->m_treeView = new QTreeWidget();
    this->tabWidget()->addTab(m_scrollView, QString("Playlist"));

    m_header = new SpiderPage();
    m_header->setPage(":/views/playlist_header.xml");
    QFrame *frame = new QFrame(this);
    m_scrollView->setLayout(new QVBoxLayout());
    frame->setLayout(new QVBoxLayout());
    frame->layout()->addWidget(m_header);
    m_header->size().setWidth(100);
    m_header->size().setHeight(1164);
    ((QBoxLayout*)frame->layout())->addWidget(m_treeView, 2);

    m_scrollView->setWidget(frame);
    // Add sample
    QTreeWidgetItem *item1 = new QTreeWidgetItem();
    item1->setText(0, QString("Home"));
    item1->setData(0, Qt::UserRole, QVariant("soaring:internal:home"));
    m_treeView->addTopLevelItem(item1);
}
