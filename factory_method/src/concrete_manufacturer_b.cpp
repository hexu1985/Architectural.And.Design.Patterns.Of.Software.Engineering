#include "concrete_manufacturer_b.h"
#include "concrete_product_b.h"

std::shared_ptr<Product> ConcreteManufacturerB::createProduct() {
    return std::make_shared<ConcreteProductB>();
}

