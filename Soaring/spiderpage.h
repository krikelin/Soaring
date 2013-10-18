#ifndef H_SPIDERPAGE_
#define H_SPIDERPAGE_

#include "soaring.h"
#include <QString>
#include <QDomDocument>
class SpiderPage : public QWidget
{
    Q_OBJECT
public:
    explicit SpiderPage(SPPage *mainPage, QWidget *parent);

    void setDocument(QString document);
    void setPage(QString fileName);
    QWidget *makeElement(QDomElement& elm, QWidget *parent);
    MainWindow *mainWindow() {
        return m_mainWindow;
    }
    SPPage *mainPage() {
        return m_mainPage;
    }
    SPView *mainView() {
        return m_mainView;
    }

signals:

public slots:
    void uriMouseClicked(QMouseEvent *);
    void linkActivated(QString link);

private:
    QDomDocument *m_domDocument;
    SPView *m_mainView;
    MainWindow *m_mainWindow;
    SPPage *m_mainPage;


};
#include "soaring_includes.h"

#endif // SPIDERPAGE_H
