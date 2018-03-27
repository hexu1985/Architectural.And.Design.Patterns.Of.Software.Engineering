#include "clerk.h"
#include "employee_visitor.h"

Clerk::Clerk(const std::string &firstname, const std::string &name, float salary)
    : Employee(firstname, name), salary(salary)
{
}

void Clerk::accept(EmployeeVisitor &v)
{
    // 拜访自己
    v.visit(*this);
}
