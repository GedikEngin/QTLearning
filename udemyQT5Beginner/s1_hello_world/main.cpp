#include <QCoreApplication>
#include <QDebug>
// imports the qt debugging lib

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); // creates a QT core app

    qInfo() << "Hello World";
    // similar to cout, used to display things in temrinal

    qInfo("Hello again");
    // alternative way to use q debugs qInfo function

    return a.exec(); // executes the application
}
