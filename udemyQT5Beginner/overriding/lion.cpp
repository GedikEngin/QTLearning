#include "lion.h"

lion::lion(QObject *parent)
    : feline{parent}
{}

void lion::speak()
{
    qInfo() << "roarr";

    feline::speak();
    // base class and scope being used
}
