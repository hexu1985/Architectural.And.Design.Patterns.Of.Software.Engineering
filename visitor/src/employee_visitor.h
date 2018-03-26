#ifndef __employee_visitor_h
#define __employee_visitor_h

class Teamleader;
class Clerk;

class EmployeeVisitor {
public:
    virtual void visit(const Teamleader &t) = 0;
    virtual void visit(const Clerk &c) = 0;
};

#endif
