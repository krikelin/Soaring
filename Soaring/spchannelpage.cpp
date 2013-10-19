#include "spchannelpage.h"

SPChannelPage::SPChannelPage(SPView *mainView, QObject *parent) :
    PlaylistPage(mainView, parent)
{
    header()->setDocument(":/views/channel_header.xml");
}
