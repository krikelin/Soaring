#include "playlistpage.h"

PlaylistPage::PlaylistPage(QWidget *parent) :
    SPPage(parent)
{
    this->m_treeView = new QTreeView(this);
    this->tabWidget()->addTab(m_treeView, QString("Playlist"));
}
