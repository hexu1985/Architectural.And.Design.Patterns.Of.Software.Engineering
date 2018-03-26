#ifndef __employee_h
#define __employee_h

#include <string>
#include <iostream>

class EmployeeVisitor;
class Employee {
protected:
    int personalNumber;

private:
    static int numberEmployee;

protected:
    std::string name;
    std::string firstName;

public:
    Employee(const std::string &firstName, const std::string &name);

    virtual ~Employee() = 0;

    int getPersonalNumber() const {
        return personalNumber;
    }

    std::string getName() const {
        return name;
    }

    void setName(const std::string &name) {
        this->name = name;
    }

    std::string getFirstname() const {
        return firstName;
    }

    void setFirstname(const std::string &firstName) {
        this->firstName = firstName;
    }

    friend std::ostream &operator <<(std::ostream &os, const Employee &employee) {
        os << "PersonalNo." << employee.personalNumber << "Name:"
            << employee.firstName << " " << employee.name;
        return os;
    }

    virtual void accept(EmployeeVisitor &v) = 0;
};

#endif
