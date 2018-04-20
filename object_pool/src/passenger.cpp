#include <iostream>
#include "passenger.h"
#include "taxi.h"
#include "taxi_central.h"

Passenger::Passenger(const std::string &name): name(name)
{
}

const std::string &Passenger::getName()
{
    return name;
}

void Passenger::enterTaxi(TaxiCentral &taxiCentral)
{
    taxi = taxiCentral.taxiRequest();

    if (taxi == NULL)
        std::cout << "For passenger " << getName() << " is no free taxi available." << std::endl;
    else
        taxi->passengerGetIn(this);
}

void Passenger::leaveTaxi(TaxiCentral &taxiCentral)
{
    if (taxi != NULL) {
        taxi->passengerGetOut();
        taxiCentral.taxiRelease(taxi);
    }
    taxi = NULL;
}
