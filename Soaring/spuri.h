#ifndef SPURI_H
#define SPURI_H
#include <QString>
#include <QStringList>
#include "soaring.h"

class SPUri
{
public:
   SPUri(const QString& uri);
   QString protocol();
   QString module();
   QString resource();
   QStringList fragments();
   QStringList arguments();
private:
   QString m_protocol;
   QString m_module;
   QString m_resource;
   QStringList m_arguments;
   QStringList m_fragments;
};
#include "soaring_includes.h"

#endif // SPURI_H
