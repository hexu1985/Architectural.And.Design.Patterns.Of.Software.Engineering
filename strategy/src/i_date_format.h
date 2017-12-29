#ifndef __i_date_format_h
#define __i_date_format_h

class IDateFormat {
public:
    virtual ~IDateFormat() {}
    virtual void datePrint(int day, int month, int year) = 0;
};

#endif
