#ifndef SPHOMEPAGE_H
#define SPHOMEPAGE_H
#include "sppage.h"
#include "spiderpage.h"
class SPHomePage : public SPPage
{
    Q_OBJECT
public:
    explicit SPHomePage(QWidget *parent = 0);

signals:

public slots:
private:
    SpiderPage *m_spiderPage;
};

#endif // SPHOMEPAGE_H
