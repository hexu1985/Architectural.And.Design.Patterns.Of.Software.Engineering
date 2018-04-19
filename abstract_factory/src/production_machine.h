#ifndef __production_machine_h
#define __production_machine_h

#include <memory>
#include "i_abstract_factory.h"
#include "box.h"

class ProductionMachine {
private:
    std::shared_ptr<IAbstractFactory> factory;

public:
    void setFactory(std::shared_ptr<IAbstractFactory> factory);
    void completeBox(Box &box);
};

#endif
