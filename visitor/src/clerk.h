#ifndef __clerk_h
#define __clerk_h

#include "employee.h"

class Clerk: public Employee {
private:
    float salary;

public:
    Clerk(const std::string &firstname, const std::string &name, float salary);

    float getSalary() const
    {
        return salary;
    }

    void accept(EmployeeVisitor &v) override;
};

#endif
