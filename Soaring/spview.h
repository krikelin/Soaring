#ifndef SPVIEW_H
#define SPVIEW_H
#include "soaring.h"
#include <QStringList>
#include <QWidget>
#include <QTableWidget>
#include <QFrame>
#include <QBoxLayout>
class SPView : public QFrame
{
    Q_OBJECT
public:
    explicit SPView(MainWindow *mainWindow, QWidget *parent = 0);
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
    MainWindow *mainWindow() {
        return m_mainWindow;
    }

    virtual SPPage *loadNewPage(const QString& resource) {}
signals:

public slots:
private:
    MainWindow *m_mainWindow;
    QMap<QString, SPPage *> *m_pages;
};

#include "soaring_includes.h"
#endif // SPVIEW_H
