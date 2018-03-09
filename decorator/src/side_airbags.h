#ifndef __side_airbags_h
#define __side_airbags_h

#include "equipment.h"

class SideAirbags: public Equipment {
public:
    SideAirbags(std::shared_ptr<IAutomobile> pIAuto): Equipment(pIAuto) { }

    int giveCosts() override;
    void showDetails() override;
};

#endif
