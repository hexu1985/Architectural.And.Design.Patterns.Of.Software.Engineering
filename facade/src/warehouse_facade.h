#ifndef __warehouse_facade_h
#define __warehouse_facade_h

#include <iostream>
#include <memory>
#include "chassis_warehouse.h"
#include "engine_warehouse.h"
#include "gear_warehouse.h"

class WarehouseFacade {
    std::shared_ptr<ChassisWarehouse> c;
    std::shared_ptr<GearWarehouse> g;
    std::shared_ptr<EngineWarehouse> e;
 
public:
    WarehouseFacade()
    {
        c.reset(new ChassisWarehouse);
        g.reset(new GearWarehouse);
        e.reset(new EngineWarehouse);
    } 

    void fillAllWarehouse(int number)
    {
        std::cout << "Add parts for all warehouses\n";
        c->fillWarehouse(number);
        g->fillWarehouse(number);
        e->fillWarehouse(number);
        std::cout << "\n";
    }

    void removeProductionParts(int number)
    {
        std::cout << "All parts necessary for the production are removed\n";
        c->removeChassis(number);
        g->removeGear(number);
        e->removeEngine(number);
        std::cout << "\n";
    }
    
};

#endif
