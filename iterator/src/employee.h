#ifndef __employee_h
#define __employee_h

#include <string>

class Employee {
private:
    std::string firstname;
    std::string lastname;
    double salary = 0.0;
    int personalNo = 0;
    std::string department;

public:
    Employee();

    Employee(std::string firstname, std::string lastname, 
            std::string department, 
            double salary, int personalNo);

    void print();
};

#endif
