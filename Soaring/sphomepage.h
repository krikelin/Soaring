#ifndef SPHOMEPAGE_H
#define SPHOMEPAGE_H

#include "soaring.h"
#include "sppage.h"
class SPHomePage : public SPPage
{
    Q_OBJECT
public:
    explicit SPHomePage(SPView *mainWindow, QWidget *parent = 0);

signals:

public slots:
private:
    SpiderPage *m_spiderPage;
};
#include "soaring_includes.h"

#endif // SPHOMEPAGE_H
