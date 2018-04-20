#ifndef __passenger_h
#define __passenger_h

#include <string>

class Taxi;
class TaxiCentral;

class Passenger {
private:
    std::string name = "";
    Taxi *taxi = NULL;

public:
    Passenger(const std::string &name);

    const std::string &getName();

    void enterTaxi(TaxiCentral &taxiCentral);

    void leaveTaxi(TaxiCentral &taxiCentral);
};

#endif
