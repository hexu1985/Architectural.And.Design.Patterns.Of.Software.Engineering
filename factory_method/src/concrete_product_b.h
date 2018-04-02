#ifndef __concrete_product_b_h
#define __concrete_product_b_h

#include <string>
#include "product.h"

class ConcreteProductB: public Product {
private:
    std::string x = "B";

public:
    void print() override;
};

#endif
