#include <iostream>
#include <memory>
#include "composite.h"
#include "leaf.h"
#include "node.h"

int main(int argc, char *argv[])
{
    std::cout << "Testprogram to the composite-pattern\n";
    std::cout << "\n";
    auto comp = std::make_shared<Composite>("Composite Level 1");
    auto comp11 = std::make_shared<Composite>("Composite Level 11");
    auto comp12 = std::make_shared<Composite>("Composite Level 12");
    auto comp121 = std::make_shared<Composite>("Composite Level 121");

    comp->add(comp11);
    comp->add(comp12);

    comp12->add(comp121);

    auto leaf111 = std::make_shared<Leaf>("leaf111");
    auto leaf112 = std::make_shared<Leaf>("leaf112");
    auto leaf121 = std::make_shared<Leaf>("leaf121");
    auto leaf122 = std::make_shared<Leaf>("leaf122");
    auto leaf123 = std::make_shared<Leaf>("leaf123");

    auto leaf1211 = std::make_shared<Leaf>("leaf1211");

    comp11->add(leaf111);
    comp11->add(leaf112);

    comp12->add(leaf121);
    comp12->add(leaf122);
    comp12->add(leaf123);

    comp121->add(leaf1211);

    std::cout << "First Edition of the Composite-Operation" << "\n";
    std::cout << "\n";
    comp->operation();

    comp12->remove(leaf122);
    comp12->remove(comp121);

    std::cout << "\n";
    std::cout << "Second Edition of Composite-Operation" << "\n";
    std::cout << "\n";
    comp->operation();

    return 0;
}
