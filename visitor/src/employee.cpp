#include "employee.h"

int Employee::numberEmployee = 0;

Employee::Employee(const std::string &firstName, const std::string &name)
    : name(name), firstName(firstName), personalNumber(numberEmployee++) {
}

Employee::~Employee() {
}

