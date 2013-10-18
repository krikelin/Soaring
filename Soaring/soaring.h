#ifndef SOARING_H_
#define SOARING_H_

#include <QString>
#include <QStringList>
#include <QWidget>
#include <QMainWindow>
namespace Ui {
    class MainWindow;
}
class SPUri;
class MainWindow;
class SPView;
class SPPage;
class SPHomePage;
class SpiderPage;
class SPInternalView;
class PlaylistPage;
class PlaylistView;
class SPUtils {
public:

    static QStringList getChunk(QStringList strings, int start, int stop);
};


#endif // SOARING_H
