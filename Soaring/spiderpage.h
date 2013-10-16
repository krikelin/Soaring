#ifndef SPIDERPAGE_H
#define SPIDERPAGE_H
#include <QtXml/QtXml>
#include <QLayout>
#include <QWidget>
#include <qt4/QtXml/qdom.h>

class SpiderPage : public QWidget
{
    Q_OBJECT
public:
    explicit SpiderPage(QWidget *parent = 0);
    void setDocument(QString document);
    void setPage(QString fileName);
    QWidget *makeElement(QDomElement& elm, QWidget *parent);
signals:

public slots:
private:
    QDomDocument *m_domDocument;


};

#endif // SPIDERPAGE_H
