#include "air_conditioner.h"
#include <iostream>

int AirConditioner::giveCosts() 
{
    return automobile->giveCosts() + 1500;
}

void AirConditioner::showDetails() 
{
    automobile->showDetails();
    std::cout << ", AirConditioner";
}

