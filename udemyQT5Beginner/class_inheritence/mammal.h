#ifndef MAMMAL_H
#define MAMMAL_H

#include <QDebug>
#include <QObject>
#include <animal.h>

class mammal : public animal
{
    Q_OBJECT
public:
    explicit mammal(QObject *parent = nullptr);

    bool hasBackbone() { return true; }

signals:
};

#endif // MAMMAL_H
