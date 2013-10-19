#include "spchannelpage.h"

SPChannelPage::SPChannelPage(SPView *mainView, QWidget *parent) :
    PlaylistPage(mainView, parent)
{
    header()->setDocument(":/views/channel_header.xml");
}
