#ifndef __teamleader_h
#define __teamleader_h

#include "employee.h"

class Teamleader: public Employee {
private:
    std::string teamDesignation;
    float basicSalary;
    float bonus;

public:
    Teamleader(const std::string &firstname, const std::string &name,
            float basicSalary, float bonus, const std::string &teamDesignation);

    std::string getTeamDesignation() const {
        return teamDesignation;
    }

    void setTeamDesignation(const std::string &teamDesignation) {
        this->teamDesignation = teamDesignation;
    }

    float getBasicSalary() const {
        return basicSalary;
    }

    void setBasicSalary(float basicSalary) {
        this->basicSalary = basicSalary;
    }

    float getBonus() const {
        return bonus;
    }

    void setBonus(float bonus) {
        this->bonus = bonus;
    }

    void accept(EmployeeVisitor &v) override;
};

#endif
