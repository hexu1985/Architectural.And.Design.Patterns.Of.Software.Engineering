#include <iostream>

#include "air_conditioner.h"
#include "cabrio.h"
#include "equipment.h"
#include "i_automobile.h"
#include "limousine.h"
#include "navigation_system.h"
#include "side_airbags.h"

int main(int argc, char *argv[])
{
    std::shared_ptr<IAutomobile> automobile = std::make_shared<AirConditioner>(std::make_shared<Limousine>());
    automobile->showDetails();
    std::cout << "\nfor " << automobile->giveCosts() << " Euro\n" << std::endl;

    automobile = std::make_shared<NavigationSystem>(std::make_shared<SideAirbags>(automobile));
    automobile->showDetails();
    std::cout << "\nfor " << automobile->giveCosts() << " Euro\n" << std::endl;

    automobile = std::make_shared<NavigationSystem>(std::make_shared<SideAirbags>(std::make_shared<Cabrio>()));
    automobile->showDetails();
    std::cout << "\nfor " << automobile->giveCosts() << " Euro\n" << std::endl;

    return 0;
}
