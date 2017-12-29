#include <memory>

#include "date.h"
#include "european_format.h"
#include "american_format.h"
#include "i_date_format.h"

int main(int argc, char *argv[])
{
    Date date(21, 9, 1985);

    date.setFormat(std::make_shared<EuropeanFormat>());
    date.print();

    date.setFormat(std::make_shared<AmericanFormat>());
    date.print();

    return 0;
}
