#ifndef SPIDERCLASSES_H
#define SPIDERCLASSES_H
#include <QWidget>
#include <QStyle>
#include <QStyleOption>
#include <QPainter>
class SpiderToolbar : public QWidget {
    void paintEvent(QPaintEvent *pe)
    {
      QStyleOption o;
      o.initFrom(this);
      QPainter p(this);
      style()->drawPrimitive(
        QStyle::PE_Widget, &o, &p, this);
    };
};

#endif // SPIDERCLASSES_H
