#ifndef LAPTOP_H
#define LAPTOP_H

#include <QDebug>
#include <QObject>

class laptop : public QObject
{
    Q_OBJECT
public:
    // constructor method, called automaticallly when class is initially created
    explicit laptop(QObject *parent = nullptr, QString name = "");

    // deconstructor
    ~laptop();

    int weight;
    QString name;
    double asKilograms();
    void test();

signals:
};

#endif // LAPTOP_H
