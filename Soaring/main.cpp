#include "mainwindow.h"
#include <QApplication>

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <QFile>
#include "splogindialog.h"


int g_logged_in;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QFile file (":/resources/style.qss");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        a.setStyleSheet(file.readAll());
    }
    MainWindow w;
    w.show();

    return a.exec();
}
