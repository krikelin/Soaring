#include "spuri.h"
SPUri::SPUri(const QString& uri)
{
    QStringList fragments = uri.split(":");
    this->m_fragments = fragments;
    if(fragments.count() > 1)
   this->m_protocol = m_fragments.at(0);
    if(fragments.count() > 2)
    this->m_module = m_fragments.at(1);
      if(fragments.count() > 3)
    this->m_resource = m_fragments.at(2);
    this->m_arguments = SPUtils::getChunk(m_fragments, 2, m_fragments.length());

}
SPUri::SPUri() {

}

QString SPUri::module() {
    return m_module;
}

QStringList SPUri::arguments() {
    return m_arguments;
}
QStringList SPUri::fragments() {
    return m_fragments;
}
QString SPUri::protocol() {
    return m_protocol;
}
QString SPUri::resource() {
    return m_resource;
}
