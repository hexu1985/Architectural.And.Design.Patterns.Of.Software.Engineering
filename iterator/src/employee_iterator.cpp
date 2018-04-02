#include "employee_iterator.h"
#include "employee.h"

EmployeeIterator::EmployeeIterator(Employee *ea, int s): data(ea), size(s) {}

bool EmployeeIterator::hasNext() {
    return index < size;
}

Employee &EmployeeIterator::next() {
    return data[index++];
}
