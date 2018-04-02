#ifndef __employee_iterator_h
#define __employee_iterator_h

#include <vector>
#include "i_iterator.h"

class Employee;

class EmployeeIterator: public IIterator {
private:
    int size = 0;
    int index = 0;
    Employee *data;

public:
    EmployeeIterator(Employee *ea, int s);

    bool hasNext() override;
    Employee &next() override;
};

#endif
