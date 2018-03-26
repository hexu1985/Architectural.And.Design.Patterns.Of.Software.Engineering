#include "salary_printer.h"
#include <iostream>

#include "clerk.h"
#include "teamleader.h"

SalaryPrinter::SalaryPrinter() {
    std::cout << "*********************************************";
    std::cout << "*************************************" << "\n";
    std::cout << "                              Payroll" << "\n";
    std::cout << "Position" << "\t" << "Firstname" << "\t"
        << "Name" << "\t" << "\t";
    std::cout << "Salary" << "\t\t" << " Bonus" << "\n";
    std::cout << "*********************************************";
    std::cout << "*************************************" << "\n";
}

void SalaryPrinter::visit(const Teamleader &t) {
    std::string firstname;
    std::string name;

    if (t.getFirstname().length() < 8)
        firstname = t.getFirstname() + "\t";
    else
        firstname = t.getFirstname();
        
    if (t.getName().length() < 8)
        name = t.getName() + "\t";
    else
        name = t.getName();

    std::cout << "Leader " << t.getTeamDesignation() << "\t" << firstname
        << "\t" << name << "\t";
    printf("%7.2f", t.getBasicSalary());
    std::cout << "\t";
    printf("%7.2f", t.getBonus());
    std::cout << "\n";
}

void SalaryPrinter::visit(const Clerk &c) {
    std::string firstname;
    std::string name;

    if (c.getFirstname().length() < 8)
        firstname = c.getFirstname() + "\t";
    else
        firstname = c.getFirstname();
        
    if (c.getName().length() < 8)
        name = c.getName() + "\t";
    else
        name = c.getName();

    std::cout << "Clerk " << "\t\t" << firstname
        << "\t" << name << "\t";
    printf("%7.2f", c.getSalary());
    std::cout << "\t ---" << "\n";
}
