#ifndef SPTESTVIEW_H
#define SPTESTVIEW_H
#include "soaring.h"
#include "spview.h"
class SPTestView : public SPView
{
    Q_OBJECT
public:
    explicit SPTestView(MainWindow *mainWindow, QWidget *parent = 0);
    virtual QString title() {
        return QString("Test view");
    }

signals:

public slots:
  private:
    QString m_title;
};
#include "soaring_includes.h"

#endif // SPTESTVIEW_H
