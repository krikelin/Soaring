#ifndef SPLABEL_H
#define SPLABEL_H

#include <QLabel>
#include "soaring.h"
#include "spuri.h"
class SPLabel : public QLabel
{
    Q_OBJECT
public:
    explicit SPLabel(QWidget *parent = 0);
    SPUri uri() {
        return m_uri;
    }
    void setUri(SPUri uri) {
        m_uri = uri;
    }

signals:
    void clicked(QMouseEvent *);

public slots:
protected:
    void mousePressEvent ( QMouseEvent * event ) ;

private:
    SPUri m_uri;
};
#include "soaring_includes.h"
#endif // SPLABEL_H
