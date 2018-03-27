#include "teamleader.h"
#include "employee_visitor.h"

Teamleader::Teamleader(const std::string &firstname, const std::string &name,
        float basicSalary, float bonus, const std::string &teamDesignation)
    : Employee(firstname, name), teamDesignation(teamDesignation), basicSalary(basicSalary), bonus(bonus) {
}

void Teamleader::accept(EmployeeVisitor &v)
{
    // 拜访自己
    v.visit(*this);
}
