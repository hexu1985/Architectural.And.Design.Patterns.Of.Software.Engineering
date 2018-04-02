#ifndef __manufacturer_h
#define __manufacturer_h

#include <memory>

class Product;

class Manufacturer {
public:
    virtual ~Manufacturer() = 0;
    virtual std::shared_ptr<Product> createProduct() = 0;
};

#endif
