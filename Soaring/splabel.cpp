#include "splabel.h"

SPLabel::SPLabel(QWidget *parent) :
    QLabel(parent)
{
}

void SPLabel::mousePressEvent(QMouseEvent *event) {
    emit clicked(event);
}
