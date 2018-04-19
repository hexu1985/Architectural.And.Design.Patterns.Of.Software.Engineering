#include <iostream>

#include "production_machine.h"
#include "box.h"
#include "concrete_factory_m6.h"
#include "concrete_factory_m10.h"

ProductionMachine machine;
Box box1(5);
Box box2(3);

int main(int argc, char *argv[])
{
    machine.setFactory(std::make_shared<ConcreteFactoryM6>());
    machine.completeBox(box1);
    box1.showContent();

    std::cout << "\n";

    machine.setFactory(std::make_shared<ConcreteFactoryM10>());
    machine.completeBox(box2);
    box2.showContent();

    return 0;
}
