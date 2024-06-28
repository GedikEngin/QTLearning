#include "canine.h"

canine::canine(QObject *parent)
    : mammal{parent}
{
    qInfo() << this << " has been constructed";
}
