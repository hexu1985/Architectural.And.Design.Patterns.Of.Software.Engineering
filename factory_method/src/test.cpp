#include <iostream>

#include "manufacturer.h"
#include "product.h"
#include "concrete_manufacturer_a.h"
#include "concrete_manufacturer_b.h"

int main(int argc, char *argv[]) {
    std::shared_ptr<Manufacturer> manufacturer;
    std::shared_ptr<Product> product;

    std::cout << "Hello" << std::endl;
    manufacturer = std::make_shared<ConcreteManufacturerA>();
    product = manufacturer->createProduct(); 
    product->print();

    manufacturer = std::make_shared<ConcreteManufacturerB>();
    product = manufacturer->createProduct(); 
    product->print();
}
