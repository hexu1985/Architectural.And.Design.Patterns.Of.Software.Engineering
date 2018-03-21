#ifndef __holidaycard_to_company_h
#define __holidaycard_to_company_h

#include "holidaycard.h"

class HolidaycardToCompany: public Holidaycard {
    void writeAdditional() override;
};

#endif
