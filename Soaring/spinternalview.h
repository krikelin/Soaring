#ifndef SPINTERNALVIEW_H
#define SPINTERNALVIEW_H
#include "spview.h"
#include "sphomepage.h"
class SPInternalView : public SPView
{
public:
    explicit SPInternalView(QWidget *parent = 0);
    /**
     * @brief argumentsChanged
     * @param arguments
     */
    virtual void argumentsChanged(const QStringList& arguments);
    virtual QString title() { return QString("Internal"); }
    virtual SPPage* loadNewPage(const QString &resource);
};

#endif // SPINTERNALVIEW_H
