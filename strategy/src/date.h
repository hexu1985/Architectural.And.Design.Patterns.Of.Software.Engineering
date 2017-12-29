#ifndef __date_h
#define __date_h

#include <memory>
#include "i_date_format.h"

class Date {
private:
    std::shared_ptr<IDateFormat> format;
    int day = 0;
    int month = 0;
    int year = 0;

public:
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setFormat(std::shared_ptr<IDateFormat> format) {
        this->format = format;
    }

    void print() {
        format->datePrint(day, month, year);
    }

};

#endif
