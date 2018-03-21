#include "leaf.h"
#include <iostream>

void Leaf::operation() 
{
    std::string formatString;
    formatString = "%" + std::to_string(level*2) + "s";
    printf(formatString.c_str(), "");
    std::cout << " - " << getName() << std::endl;
}
