#ifndef CANINE_H
#define CANINE_H

#include <QDebug>
#include <QObject>
#include <mammal.h>

class canine : public mammal
{
    Q_OBJECT
public:
    explicit canine(QObject *parent = nullptr);

    void bark() { qInfo() << "bark"; }

signals:
};

#endif // CANINE_H
