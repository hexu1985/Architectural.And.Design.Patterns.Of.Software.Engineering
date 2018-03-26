#include "clerk.h"
#include "employee_visitor.h"

Clerk::Clerk(const std::string &firstName, const std::string &name, float salary)
    : Employee(firstName, name), salary(salary)
{
}

void Clerk::accept(EmployeeVisitor &v)
{
    // 拜访自己
    v.visit(*this);
}
