#ifndef __colleague_h
#define __colleague_h

#include "mediator.h"

class Colleague {
private:
    Mediator *mediator; 

public:
    Colleague(Mediator *m) {
        mediator = m;
    }

    virtual void change() {
        mediator->changeOccurred(this);
    }

};

#endif
