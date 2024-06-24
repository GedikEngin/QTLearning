#ifndef DEMOCLASS_H
#define DEMOCLASS_H

#include <QObject>

class DemoClass : public QObject
{
    Q_OBJECT
public:
    DemoClass();

    int getVar() const;
    void setVar(int newVar);

    Q_INVOKABLE void increaseValue();
    Q_INVOKABLE void decreaseValue();

signals:
    void varChanged();

private:
    int var = 0;
    Q_PROPERTY(int var READ getVar WRITE setVar NOTIFY varChanged)
};

#endif // DEMOCLASS_H
