#include "concrete_factory_m6.h"
#include "nut_m6.h"
#include "screw_m6.h"

std::shared_ptr<IScrew> ConcreteFactoryM6::createScrew() 
{
    return std::make_shared<ScrewM6>();
}

std::shared_ptr<INut> ConcreteFactoryM6::createNut() 
{
    return std::make_shared<NutM6>();
}

