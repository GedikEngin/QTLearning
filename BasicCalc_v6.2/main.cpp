#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; // the main window becomes w
    w.show(); // displays window
    return a.exec();
}
