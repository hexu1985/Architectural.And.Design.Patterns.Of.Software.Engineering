#include "employee.h"
#include "employee_array.h"
#include "i_iterator.h"

static EmployeeArray employeeList;

void init_employeeList()
{
    employeeList.add(Employee("Herman", "Hinz", "MMI-Development", 3250.00, 1));
    employeeList.add(Employee("Thomas", "Kunz", "MMI-Development", 3050.00, 2));
    employeeList.add(Employee("Heinz", "Mueller", "Unit Tests", 3450.00, 3));
    employeeList.add(Employee("Hans", "Maier", "Unit Tests", 3400.00, 4));
    employeeList.add(Employee("Max", "Muster", "Unit Tests", 3500.00, 5));
    employeeList.add(Employee("Peter", "Schmidt", "Requirements Engineering", 3700.00, 6));
}

int main() 
{
    init_employeeList();

    auto iter = employeeList.generateIterator();

    while (iter->hasNext()) {
        Employee &elem = iter->next();
        elem.print();
    }
}
