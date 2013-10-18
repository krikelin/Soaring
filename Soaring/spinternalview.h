#ifndef SPINTERNALVIEW_H
#define SPINTERNALVIEW_H
#include "soaring.h"
#include "spview.h"
class SPInternalView : public SPView
{
public:
    explicit SPInternalView(MainWindow *mainWindow, QWidget *parent = 0);
    /**
     * @brief argumentsChanged
     * @param arguments
     */
    virtual void argumentsChanged(const QStringList& arguments);
    virtual QString title() { return QString("Internal"); }
    virtual SPPage* loadNewPage(const QString &resource);
};

#include "soaring_includes.h"
#endif // SPINTERNALVIEW_H
