#include "spinternalview.h"

SPInternalView::SPInternalView(QWidget *parent)
    : SPView(parent)
{
    // Add overview

}
void SPInternalView::argumentsChanged(const QStringList &arguments) {
    QString resource = arguments.at(0);
    if (resource == QString("home"))
    loadPage(resource);
}

SPPage* SPInternalView::loadNewPage(const QString &resource) {
    qDebug("Test");
    SPPage *result;
    if(resource == QString("home")) {
        result = new SPHomePage(this);
    }
    return result;
}
