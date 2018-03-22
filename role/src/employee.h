#ifndef __employee_h
#define __employee_h

#include <string>

class Employee {
private:
    std::string name;

public:
    Employee(const std::string &name): name(name) {}

    const std::string &getName() {
        return name;
    }
};

#endif
