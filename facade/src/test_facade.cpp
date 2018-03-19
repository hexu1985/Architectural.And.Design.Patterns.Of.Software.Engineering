#include "warehouse_facade.h"

int main(int argc, char *argv[])
{
    WarehouseFacade facade;
    facade.fillAllWarehouse(10);
    facade.removeProductionParts(5);
}
