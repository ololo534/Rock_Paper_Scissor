#include "mainwindow.h"

#include <QApplication>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(831, 572);
    w.show();
    return a.exec();
}
