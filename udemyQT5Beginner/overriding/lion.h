#ifndef LION_H
#define LION_H

#include <QObject>
#include <feline.h>
#include <qdebug.h>

class lion : public feline
{
    Q_OBJECT
public:
    explicit lion(QObject *parent = nullptr);

    void speak();

signals:
};

#endif // LION_H
