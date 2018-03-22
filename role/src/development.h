#ifndef __development_h
#define __development_h

#include <memory>
#include "employee.h"

class Development {
private:
    std::shared_ptr<Employee> employee;
    std::string project;

public:
    Development(const std::string &project): project(project) {}

    std::string getDepartmentDesignation() {
        return "development";
    }

    void printProject() {
        std::cout << employee->getName() << " "
            << "is currently working on: " << project << "\n";
    }

    std::shared_ptr<Employee> getEmployee() {
        return employee;
    }

    void setEmployee(std::shared_ptr<Employee> employee) {
        this->employee = employee;
    }
};

#endif
