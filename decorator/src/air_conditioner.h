#ifndef __air_conditioner_h
#define __air_conditioner_h

#include "equipment.h"

class AirConditioner: public Equipment {
public:
    AirConditioner(std::shared_ptr<IAutomobile> pIAuto): Equipment(pIAuto) { }

    int giveCosts() override;
    void showDetails() override;
};

#endif
