#include "navigation_system.h"
#include <iostream>

int NavigationSystem::giveCosts() 
{
    return automobile->giveCosts() + 2500;
}

void NavigationSystem::showDetails() 
{
    automobile->showDetails();
    std::cout << ", NavigationSystem";
}

