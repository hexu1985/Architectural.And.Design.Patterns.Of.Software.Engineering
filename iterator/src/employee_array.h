#ifndef __employee_array_h
#define __employee_array_h

#include "employee.h"
#include "i_datastructure.h"

class EmployeeArray: public IDatastructure {
private:
    static const int max = 10;
    Employee data[max];
    int index = 0;

public:
    std::shared_ptr<IIterator> generateIterator() override;

    void add(const Employee &e);
};

#endif
