// implementation file

#include "animals.h"
// it inherits QDebug from animals.h

animals::animals(QObject *parent)
    : QObject{parent}
{}

void animals::speak(QString message)
{
    qDebug() << message;
}
