#ifndef ANIMAL_H
#define ANIMAL_H

#include <QDebug>
#include <QObject>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr);

    bool isAlive() { return true; }

signals:
};

#endif // ANIMAL_H
