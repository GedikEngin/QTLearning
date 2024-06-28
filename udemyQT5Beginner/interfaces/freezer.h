#ifndef FREEZER_H
#define FREEZER_H

class freezer
{
public:
    virtual bool freeze() = 0;
    // virtual function, the = 0 means that there is no implemenation for it, the function prototype points to nothing
};

#endif // FREEZER_H
