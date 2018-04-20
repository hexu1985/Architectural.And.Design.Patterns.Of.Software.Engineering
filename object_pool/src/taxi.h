#ifndef __taxi_h
#define __taxi_h

#include <memory>

class Passenger;

class Taxi {
private:
    Passenger *passenger = NULL;
    int number = 0;

public:
    Taxi(int number);

    int getNumber();

    void passengerGetOut();

    void passengerGetIn(Passenger *passenger);
};


#endif
