#ifndef __concrete_manufacturer_a_h
#define __concrete_manufacturer_a_h

#include "manufacturer.h"

class ConcreteManufacturerA: public Manufacturer {
public:
    std::shared_ptr<Product> createProduct() override;
};

#endif
