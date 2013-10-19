#ifndef SPLOGINCREDENTIAL_H
#define SPLOGINCREDENTIAL_H

#include <QObject>

class SPLoginCredential : public QObject
{
    Q_OBJECT
public:
    explicit SPLoginCredential(QObject *parent = 0);
    void setPassword(QString password) {
        m_password = password;
    }

    void setUsername(QString username) {
        m_username = username;
    }

    QString password() {
        return m_password;
    }

    QString username() {
        return m_username;
    }

signals:

public slots:
private:
    QString m_username;
    QString m_password;
};

#endif // SPLOGINCREDENTIAL_H
