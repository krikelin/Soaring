#ifndef SPTESTVIEW_H
#define SPTESTVIEW_H
#include "spview.h"
class SPTestView : public SPView
{
    Q_OBJECT
public:
    explicit SPTestView(QWidget *parent = 0);
    virtual QString title() {
        return QString("Test view");
    }

signals:

public slots:
  private:
    QString m_title;
};

#endif // SPTESTVIEW_H
