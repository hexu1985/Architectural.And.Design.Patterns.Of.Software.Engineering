#ifndef __engine_warehouse_h
#define __engine_warehouse_h

#include <iostream>

class EngineWarehouse {
private:
    int engineNumber = 0;

public:
    void fillWarehouse(int number) {
        engineNumber = engineNumber + number;
        std::cout << "warehouse was increased by " << number << " engines." << "\n";
    }

    void removeEngine(int number) {
        engineNumber = engineNumber + number;
        std::cout << "For the production were " << number << " engines were taken." << "\n";
    }
};

#endif
