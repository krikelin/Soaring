#ifndef SPVIEW_H
#define SPVIEW_H

#include "spuri.h"
#include <QTableWidget>
#include <QBoxLayout>
#include "sppage.h"
class SPView : public QFrame
{
    Q_OBJECT
public:
    explicit SPView(QWidget *parent = 0);
    /**
     * @brief argumentsChanged
     * @param arguments
     */
    virtual void argumentsChanged(const QStringList& arguments);

    /**
     * Each page in a sp view is connected to a resource (The qstring), that
     * are called upon the argumentsChanged.
     * @brief pages
     * @return
     */
    QMap<QString, SPPage *> *pages();
    virtual QString title() { return QString(""); }

    /**
     * Adds a new page to the viewstack
     * @brief addPage
     * @param resource
     */
    SPPage* loadPage(const QString& resource);
    virtual SPPage *loadNewPage(const QString& resource) {}
signals:

public slots:
private:

    QMap<QString, SPPage *> *m_pages;
};

#endif // SPVIEW_H
