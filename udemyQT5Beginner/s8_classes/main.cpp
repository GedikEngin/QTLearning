#include <QCoreApplication>
// #include <animals.h>
#include <laptop.h>

void test(laptop &machine)
{
    machine.test();
}

void makeLaptops(QObject *parent)
{
    laptop mine(parent, "my laptop");
    laptop yours(parent, "your laptop");

    // both 0 and NULL indicate that there is nothing to the pointer
    // using &a means when application is deleted the instances of the classes are deleted as well

    mine.weight = 3;
    yours.weight = 7;

    // qDebug() << mine.asKilograms();
    // qDebug() << yours.asKilograms();

    test(mine);
    test(yours);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // // creates instances inheriting from animals class
    // animals cat;
    // animals dog;
    // animals bird;

    // // uses the class function to use speak, which was initialized as a prototype in animals header file
    // cat.speak("meow");
    // dog.speak("woof");
    // bird.speak("caw");

    makeLaptops(&a);

    return a.exec();
}
