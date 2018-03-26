#include "company.h"
#include "salary_printer.h"
#include "employee.h"

int main(int argc, char *argv[])
{
    auto company = std::make_shared<Company>();
    auto personnel = company->getPersonnel();

    auto visitor = std::make_shared<SalaryPrinter>();

    for (auto employee: personnel) {
        employee->accept(*visitor);
    }
}
