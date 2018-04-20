#include "taxi_central.h"
#include "passenger.h"

int main(int argc, char *argv[])
{
    TaxiCentral &taxiCentral = TaxiCentral::getCentral();

    Passenger hans("Hans");
    Passenger anna("Anna");
    Passenger klaus("Klaus");

    hans.enterTaxi(taxiCentral);
    anna.enterTaxi(taxiCentral);
    klaus.enterTaxi(taxiCentral);

    hans.leaveTaxi(taxiCentral);
    klaus.enterTaxi(taxiCentral);

    anna.leaveTaxi(taxiCentral);
    klaus.leaveTaxi(taxiCentral);

    return 0;
}
