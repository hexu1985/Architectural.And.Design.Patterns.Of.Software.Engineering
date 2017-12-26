#ifndef __mediator_h
#define __mediator_h

class Colleague;

class Mediator {
public:
    virtual void changeOccurred(Colleague *colleague) = 0;
};

#endif
