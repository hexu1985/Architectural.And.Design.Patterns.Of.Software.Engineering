#ifndef __sale_h
#define __sale_h

class Sale {
private:
    std::shared_ptr<Employee> employee;
    int turnover;

public:
    Sale(int turnover): turnover(turnover) {}

    std::string getDepartmentDesignation() {
        return "Sale";
    }

    void printTurnover() {
        std::cout << "Current turnover of " << employee->getName() 
            << ": " << turnover << " Euro." << "\n";
    }

    std::shared_ptr<Employee> getEmployee() {
        return employee;
    }

    void setEmployee(std::shared_ptr<Employee> employee) {
        this->employee = employee;
    }
};

#endif
