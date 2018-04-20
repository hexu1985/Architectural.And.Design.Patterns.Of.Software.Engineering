#include "taxi.h"
#include "taxi_central.h"
#include <assert.h>
#include <iostream>

TaxiCentral TaxiCentral::taxiCentral;

TaxiCentral::TaxiCentral()
{
    for (int i = 1; i <= size; i++)
        taxis.push_back(new Taxi(i));

    std::cout << "New Taxicentral generated with " << size << " managed taxis." << std::endl;
}

TaxiCentral::~TaxiCentral()
{
    assert(size == taxis.size());

    for (int i = 0; i < size; i++)
        delete taxis[i];
}

TaxiCentral &TaxiCentral::getCentral()
{
    return taxiCentral;
}

Taxi *TaxiCentral::taxiRequest()
{
    if (taxis.size() > 0) {
        Taxi *taxi = taxis.front();
        taxis.pop_front();
        return taxi;
    }

    return NULL;
}

void TaxiCentral::taxiRelease(Taxi *taxi)
{
    taxis.push_back(taxi);
}
