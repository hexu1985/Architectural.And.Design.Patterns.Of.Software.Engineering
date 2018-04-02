#include "employee_array.h"
#include "employee_iterator.h"

std::shared_ptr<IIterator> EmployeeArray::generateIterator() {
    return std::make_shared<EmployeeIterator>(data, index);
}

void EmployeeArray::add(const Employee &e) {
    if (index < max - 1) {
        data[index++] = e;
    }
}
