#ifndef __taxi_central_h
#define __taxi_central_h

#include <deque>

class Taxi;

class TaxiCentral {
private:
    int size = 2;
    std::deque<Taxi *> taxis;
    static TaxiCentral taxiCentral;

    TaxiCentral();

public:
    ~TaxiCentral();

    static TaxiCentral &getCentral();

    Taxi *taxiRequest();

    void taxiRelease(Taxi *taxi);
};

#endif
