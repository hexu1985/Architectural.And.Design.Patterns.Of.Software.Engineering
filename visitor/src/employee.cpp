#include "employee.h"

int Employee::numberEmployee = 0;

Employee::Employee(const std::string &firstname, const std::string &name)
    : name(name), firstname(firstname), personalNumber(numberEmployee++) {
}

Employee::~Employee() {
}

