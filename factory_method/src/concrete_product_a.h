#ifndef __concrete_product_a_h
#define __concrete_product_a_h

#include <string>
#include "product.h"

class ConcreteProductA: public Product {
private:
    std::string x = "A";

public:
    void print() override;
};

#endif
