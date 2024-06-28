#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>

#include <freezer.h>
#include <microwave.h>
#include <toaster.h>

// normally would implode if the functions within other headers weren't virtual, as they are not implemented
class appliance : public QObject, public freezer, public toaster, public microwave
{
    Q_OBJECT
public:
    explicit appliance(QObject *parent = nullptr);

signals:

    // microwave interface
public:
    bool cook();

    // toaster interface
public:
    bool grill();

    // freezer interface
public:
    bool freeze();
};

#endif // APPLIANCE_H
