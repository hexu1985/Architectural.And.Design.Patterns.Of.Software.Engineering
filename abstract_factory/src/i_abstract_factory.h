#ifndef __i_abstract_factory_h
#define __i_abstract_factory_h

#include <memory>
#include "i_nut.h"
#include "i_screw.h"

class IAbstractFactory {
public:
    virtual ~IAbstractFactory() {}
    virtual std::shared_ptr<IScrew> createScrew() = 0;
    virtual std::shared_ptr<INut> createNut() = 0;
};

#endif
