#ifndef __gear_warehouse_h
#define __gear_warehouse_h

#include <iostream>

class GearWarehouse {
private:
    int gearNumber = 0;

public:
    void fillWarehouse(int number) {
        gearNumber = gearNumber + number;
        std::cout << "warehouse was increased by " << number << " gears." << "\n";
    }

    void removeGear(int number) {
        gearNumber = gearNumber + number;
        std::cout << "For the production were " << number << " gears were taken." << "\n";
    }
};

#endif
