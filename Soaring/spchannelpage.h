#ifndef SPCHANNELPAGE_H
#define SPCHANNELPAGE_H

#include <QObject>
#include "soaring.h"
#include "spview.h"
#include "playlistpage.h"
#include "sppage.h"
#include "luabind/luabind.hpp"
class SPChannelPage : public PlaylistPage
{
    Q_OBJECT
public:
    explicit SPChannelPage(SPView *mainView, QWidget *parent = 0);

signals:

public slots:
private:
};
#include "soaring_includes.h"

#endif // SPCHANNELPAGE_H
