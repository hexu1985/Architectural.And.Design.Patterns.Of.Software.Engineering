#include <iostream>
#include "employee.h"
#include "development.h"
#include "sale.h"

int main(int argc, char *argv[]) {
    auto maier = std::make_shared<Employee>("Maier");
    auto schulze = std::make_shared<Employee>("Schulze");

    auto develement1 = std::make_shared<Development>("Product 2.0");
    auto develement2 = std::make_shared<Development>("Product Addon 1.0");

    develement1->setEmployee(schulze); 
    develement2->setEmployee(maier); 

    std::cout << "\nCurrent Projects of the Employees: " << "\n";
    develement1->printProject();
    develement2->printProject();

    std::cout << "\nSchulze gets "
        << "additional tasks on sale:" << "\n";
    auto sale1 = std::make_shared<Sale>(15000);
    sale1->setEmployee(schulze); 

    std::cout << "\nOnly Schulz is in the " << "Sales Department:" << "\n";
    sale1->printTurnover();
}

