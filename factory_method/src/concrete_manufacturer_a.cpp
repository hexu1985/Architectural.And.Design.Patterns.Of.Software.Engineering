#include "concrete_manufacturer_a.h"
#include "concrete_product_a.h"

std::shared_ptr<Product> ConcreteManufacturerA::createProduct() {
    return std::make_shared<ConcreteProductA>();
}

