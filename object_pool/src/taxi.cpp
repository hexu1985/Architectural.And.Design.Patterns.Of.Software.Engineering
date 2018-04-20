#include "taxi.h"
#include "passenger.h"
#include <iostream>

Taxi::Taxi(int number): number(number)
{
}

int Taxi::getNumber()
{
    return number;
}

void Taxi::passengerGetOut()
{
    std::cout << "From taxi " << getNumber()
        << ", passenger " << passenger->getName()
        << " alighted." << std::endl;
}

void Taxi::passengerGetIn(Passenger *passenger)
{
    this->passenger = passenger;

    std::cout << "In taxi " << getNumber()
        << ", passenger " << passenger->getName()
        << " has boarded." << std::endl;
}

