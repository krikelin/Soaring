#ifndef SEARCHVIEW_H
#define SEARCHVIEW_H
#include "soaring.h"
#include "spview.h"
#include "searchpage.h"
#include "mainwindow.h"
#include "spiderpage.h"
#include <QTreeWidget>
class SearchView : public SPView
{
    Q_OBJECT
public:
    explicit SearchView(MainWindow *mainWindow, QWidget *parent = 0);
    SPPage* loadNewPage(const QString &resource);
    virtual void argumentsChanged(const QStringList &arguments);
signals:

public slots:
};
#include "soaring_includes.h"
#endif // SEARCHVIEW_H
