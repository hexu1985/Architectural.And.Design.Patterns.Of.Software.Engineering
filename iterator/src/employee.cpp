#include "employee.h"
#include <iostream>

Employee::Employee()
{
}

Employee::Employee(std::string firstname, std::string lastname, 
            std::string department, 
            double salary, int personalNo):
    firstname(firstname), lastname(lastname), department(department),
    salary(salary), personalNo(personalNo) {
}

void Employee::print() {
    std::cout << firstname << " " << lastname << ", " << personalNo << ", "
        << department << ", " << salary << "\n";
}
