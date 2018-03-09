#ifndef __cabrio_h
#define __cabrio_h

#include "i_automobile.h"

class Cabrio: public IAutomobile {
public:
    int giveCosts() override;
    void showDetails() override;
};

#endif
