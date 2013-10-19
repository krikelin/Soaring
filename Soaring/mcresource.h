#ifndef MCRESOURCE_H
#define MCRESOURCE_H

#include <QObject>
#include "mashcast.h"
class MCResource : public QObject
{
    Q_OBJECT
public:
    explicit MCResource(QObject *parent = 0);
    explicit MCResource(QString title, QString uri, QObject *parent = 0);
    QString title() {
        return m_title;
    }
    QString uri() {
        return m_uri;
    }
    QString author() {
        return m_author;
    }
    QString id() {
        return m_id;
    }

    void setTitle(QString value) {
        m_title = value;
    }
    void setUri(QString value) {
        m_uri = value;
    }
    void setAuthor(QString value) {
        m_author = value;
    }
signals:
    void resourceLoaded();

public slots:
private:
    QString m_title;
    QString m_uri;
    QString m_author;
    QString m_id;
};
#include "mashcast_includes.h"

#endif // MCRESOURCE_H
