#include "animal.h"

animal::animal(QObject *parent, QString name)
    : QObject{parent}
// You can either initialize member variables using the member initializer list:
// , name{name}
// or assign them inside the constructor body:
{
    this->name = name; // Assign the constructor parameter to the member variable

    qInfo() << "animal name param: " << &name << " = " << name;
    // Address and value of the constructor parameter 'name'

    qInfo() << "animal name param: " << &this->name << " = " << this->name;
    // Address and value of the member variable 'name'
}

void animal::sayHello(QString message)
{
    // These are both the same because they are within the same scope, the animal class and sayHello function
    qInfo() << message << " from " << name << " at " << &name; // Using the member variable 'name'
    qInfo() << message << " from " << this->name << " at " << &this->name;
    // Explicitly using 'this' to reference the member variable
}
