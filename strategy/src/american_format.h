#ifndef __american_format_h
#define __american_format_h

#include <iostream>
#include <iomanip>
#include "i_date_format.h"

class AmericanFormat: public IDateFormat {
public:
    void datePrint(int day, int month, int year) override {
        std::cout << "American Format: "
            << std::setfill('0')
            << std::setw(2) << day << "/"
            << std::setw(2) << month << "/"
            << year << "\n"
            << std::setfill(' ');
    }
};

#endif
