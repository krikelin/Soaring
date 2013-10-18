#include "searchview.h"

SearchView::SearchView(MainWindow *mainWindow, QWidget *parent) :
    SPView(mainWindow, parent)
{

}
void SearchView::argumentsChanged(const QStringList &arguments) {
    QString resource = arguments.at(0);
    //if (resource == QString("home"))
    loadPage(resource);
}

SPPage* SearchView::loadNewPage(const QString &resource) {
    SPPage *result;
    result = new SearchPage(this);

    return result;
}
