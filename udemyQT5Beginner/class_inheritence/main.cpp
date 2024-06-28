#include <QCoreApplication>
#include <canine.h> // canine and feline both inherit from mammal in header, which inherits from animal, allowing us to use animal class
#include <feline.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal test;

    feline kitty;

    canine puppy;

    return a.exec();
}
