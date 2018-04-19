#ifndef concrete_factory_m6_h
#define concrete_factory_m6_h

#include "i_abstract_factory.h"

class ConcreteFactoryM6: public IAbstractFactory {
public:
    std::shared_ptr<IScrew> createScrew() override;
    std::shared_ptr<INut> createNut() override;
};


#endif
