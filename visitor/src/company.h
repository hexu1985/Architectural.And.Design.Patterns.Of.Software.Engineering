#ifndef __company_h
#define __company_h

#include <vector>
#include <memory>

class Employee;

class Company {
private:
    std::vector<std::shared_ptr<Employee>> personnel;

public:
    Company();

    void initializeSampleData();

    std::vector<std::shared_ptr<Employee>> getPersonnel(); 
};

#endif
