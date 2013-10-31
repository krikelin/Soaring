#include "spchannelpage.h"

SPChannelPage::SPChannelPage(SPView *mainView, QWidget *parent) :
    PlaylistPage(mainView, parent)
{
    luabind::object *token = new luabind::object;
    setToken(token);
    (*token)["title"] = "test";
    header()->setPage(QString(":/views/channel_header.xml"), this->getToken());
}
