#include "laptop.h"

// when creating laptop class it is automatically called
// automatically creates "this" variable that refers to itself
laptop::laptop(QObject *parent, QString name)
    : QObject{parent}
{
    this->name = name; // sets the "this" object's name to be the name passed into it
    qInfo() << this << name << " constructed";
}

// used when destroying class
laptop::~laptop()
{
    qInfo() << this << name << " deconstructed";
}

double laptop::asKilograms()
{
    return this->weight
           * 0.453592; // pointer points to the location of the weight variable in memory
}

void laptop::test()
{
    qInfo() << this << name << "is" << asKilograms() << "kg";
}
