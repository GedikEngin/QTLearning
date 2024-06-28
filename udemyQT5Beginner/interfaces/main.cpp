#include <QCoreApplication>
#include <QDebug>
#include <appliance.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance Kitchen9000;
    qInfo() << "Can it cook? " << Kitchen9000.cook();
    qInfo() << "Can it grill? " << Kitchen9000.grill();
    qInfo() << "Can it freeze? " << Kitchen9000.freeze();

    return a.exec();
}
