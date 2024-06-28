// blueprint file

#ifndef ANIMALS_H
#define ANIMALS_H

#include <QDebug>
#include <QObject>

class animals : public QObject
{
    Q_OBJECT
public:
    explicit animals(QObject *parent = nullptr);

    void speak(
        QString message); // function prototype takes in message paramter which is of type QString

signals:
};

#endif // ANIMALS_H
