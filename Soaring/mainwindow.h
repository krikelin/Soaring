
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMap>
#include <QToolBar>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QLineEdit>
#include "soaring.h"
#include "mashcast.h"
#include "mcmashcast.h"
#include "mcchannel.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QMap<QString, SPView *> *views();
    SPView *makeView(QString module);
    void navigate(SPUri& uri);
    void createList();
    MCMashcast *mashcast() {
        return m_mashcast;
    }

public slots:
    void gotChannelList(QList<MCChannel*>);
    void itemSelected(QTreeWidgetItem *item, int column);
    void searchBarEnter();
private:
    QMap<QString, SPView *> *m_views;
    QAbstractItemModel *m_model;
    Ui::MainWindow *ui;
    QLineEdit *m_searchBar;
    MCMashcast *m_mashcast;
    QTreeWidgetItem *m_channelsItem;
};
#include "mashcast_includes.h"
#include "soaring_includes.h"
#endif // MAINWINDOW_H
