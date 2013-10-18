#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H
#include "soaring.h"
#include "sppage.h"
#include "searchpage.h"
#include "spiderpage.h"
#include <QString>
#include <QStringList>
#include <QScrollArea>
class SearchPage : public SPPage
{
    Q_OBJECT
public:
    explicit SearchPage(SPView *mainView, QWidget *parent = 0);

signals:

public slots:
private:
    QScrollArea *m_scrollView;
    SpiderPage *m_header;
    QTreeWidget *m_treeView;


};
#include "soaring_includes.h"
#endif // SEARCHPAGE_H
