#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "spuri.h"
#include "spview.h"
#include "soaring.h"
#include <QToolBar>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QLineEdit>
#include "spinternalview.h"
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
public slots:
    void itemSelected(QTreeWidgetItem *item, int column);
    void searchBarEnter();
private:
    QMap<QString, SPView *> *m_views;
    QAbstractItemModel *m_model;
    Ui::MainWindow *ui;
    QLineEdit *m_searchBar;
};

#endif // MAINWINDOW_H