#ifndef __i_automobile_h
#define __i_automobile_h

class IAutomobile {
public:
    virtual ~IAutomobile() {}
    virtual int giveCosts() = 0;
    virtual void showDetails() = 0;
};

#endif
