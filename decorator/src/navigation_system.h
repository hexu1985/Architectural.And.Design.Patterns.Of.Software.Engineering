#ifndef __navigation_system_h
#define __navigation_system_h

#include "equipment.h"

class NavigationSystem: public Equipment {
public:
    NavigationSystem(std::shared_ptr<IAutomobile> pIAuto): Equipment(pIAuto) { }

    int giveCosts() override;
    void showDetails() override;
};

#endif
