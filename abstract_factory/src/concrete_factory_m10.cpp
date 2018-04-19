#include "concrete_factory_m10.h"
#include "nut_m10.h"
#include "screw_m10.h"

std::shared_ptr<IScrew> ConcreteFactoryM10::createScrew() 
{
    return std::make_shared<ScrewM10>();
}

std::shared_ptr<INut> ConcreteFactoryM10::createNut() 
{
    return std::make_shared<NutM10>();
}

