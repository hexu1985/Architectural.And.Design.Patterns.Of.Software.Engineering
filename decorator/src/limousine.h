#ifndef __limousine_h
#define __limousine_h

#include "i_automobile.h"

class Limousine: public IAutomobile {
public:
    int giveCosts() override;
    void showDetails() override;
};

#endif
