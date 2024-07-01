#include <QCoreApplication>
#include <QDebug>
#include <animal.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "engin";
    qInfo() << "my name is at: " << &name << "=" << name;

    animal cat(&a, "fluffy"); // looks at the constructor scope
    animal dog(&a, "fido");   // looks at the constructor scope

    animal human(&a, name); // looks at the constructor scope

    // in animal files, the scope is the same as it will use the animal class and sayHello functions scope
    human.sayHello("sup");

    return a.exec();
}
