#include "production_machine.h"

void ProductionMachine::setFactory(std::shared_ptr<IAbstractFactory> factory)
{
    this->factory = factory;
}

void ProductionMachine::completeBox(Box &box)
{
    int i;
    for (i = 0; i <= box.number(); i++) {
        box.pushScrew(factory->createScrew());
        box.pushNut(factory->createNut());
    }
}
