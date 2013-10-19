#include "mcresource.h"
#include <QCryptographicHash>
MCResource::MCResource(QString title, QString uri, QObject *parent) :
    QObject(parent)
{
    this->m_title = title;
    this->m_uri = uri;
    this->m_id = QString(QCryptographicHash::hash(uri.toUtf8(), QCryptographicHash::Md5));
}


