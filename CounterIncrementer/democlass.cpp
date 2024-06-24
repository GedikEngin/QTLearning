#include "democlass.h"

DemoClass::DemoClass() {}

int DemoClass::getVar() const
{
    return var;
}

void DemoClass::setVar(int newVar)
{

    if (var == newVar)
        return;
    var = newVar;
    emit varChanged();
}

void DemoClass::increaseValue()
{
    this->var++;
    emit varChanged();
}

void DemoClass::decreaseValue()
{
    this->var--;
    emit varChanged();
}
