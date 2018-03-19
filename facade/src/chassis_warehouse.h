#ifndef __chassis_warehouse_h
#define __chassis_warehouse_h

#include <iostream>

class ChassisWarehouse {
private:
    int chassisNumber = 0;

public:
    void fillWarehouse(int number) {
        chassisNumber = chassisNumber + number;
        std::cout << "warehouse was increased by " << number << " chassis." << "\n";
    }

    void removeChassis(int number) {
        chassisNumber = chassisNumber + number;
        std::cout << "For the production were " << number << " chassis were taken." << "\n";
    }
};

#endif
