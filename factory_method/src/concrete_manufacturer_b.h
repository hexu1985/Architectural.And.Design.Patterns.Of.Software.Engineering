#ifndef __concrete_manufacturer_b_h
#define __concrete_manufacturer_b_h

#include "manufacturer.h"

class ConcreteManufacturerB: public Manufacturer {
public:
    std::shared_ptr<Product> createProduct() override;
};

#endif
