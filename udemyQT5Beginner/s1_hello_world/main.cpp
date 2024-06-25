#include <QCoreApplication>
#include <QDebug>
// imports the qt debugging lib

/**
 * @brief main - name of function being referred to // starting point
 * @param argc - the argument count
 * @param argv - the arguments value
 * @return -integer type,  the exit code/value of the app
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); // creates a QT core app

    qInfo() << "Hello World";
    // similar to cout, used to display things in temrinal

    qInfo("Hello again");
    // alternative way to use q debugs qInfo function

    return a.exec(); // executes the application
}
