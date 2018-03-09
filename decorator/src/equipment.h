#ifndef __equipment_h
#define __equipment_h

#include <memory>
#include "i_automobile.h"

class Equipment: public IAutomobile {
protected:
    std::shared_ptr<IAutomobile> automobile;

public:
    Equipment(std::shared_ptr<IAutomobile> pIAuto): automobile(pIAuto) { }
};

#endif
