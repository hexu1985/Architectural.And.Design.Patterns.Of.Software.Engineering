#include "side_airbags.h"
#include <iostream>

int SideAirbags::giveCosts() 
{
    return automobile->giveCosts() + 1000;
}

void SideAirbags::showDetails() 
{
    automobile->showDetails();
    std::cout << ", SideAirbags";
}

