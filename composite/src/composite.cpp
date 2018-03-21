#include "composite.h"
#include <iostream>

void Composite::add(std::shared_ptr<Node> comp)
{
    childElements.push_back(comp);
}

void Composite::remove(std::shared_ptr<Node> comp)
{
    for (auto &pNode : childElements) {
        Node &f = *pNode;
        if (typeid(f) == typeid(Composite))
            dynamic_cast<Composite &>(f).remove(comp);
    }
    childElements.remove(comp);
}

void Composite::operation()
{
    std::string formatString;
    level++;
    formatString = "%" + std::to_string(level*2) + "s";
    printf(formatString.c_str(), "");
    std::cout << "+ " << getName() << "" << std::endl;
    for (auto &pNode : childElements) {
        Node &f = *pNode;
        f.operation();
    }
    --level;
}
