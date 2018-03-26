#ifndef __salary_printer_h
#define __salary_printer_h

#include "employee_visitor.h"

class SalaryPrinter: public EmployeeVisitor {
public:
    SalaryPrinter();

    void visit(const Teamleader &t) override;
    void visit(const Clerk &c) override;
};

#endif
