#include <QCoreApplication>
#include <QDebug>
// imports the qt debugging lib

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<< "Hello World";
    // similar to cout, used to display things in temrinal

    return a.exec();
}
