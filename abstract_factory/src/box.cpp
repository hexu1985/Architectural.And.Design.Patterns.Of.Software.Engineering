#include "box.h"

Box::Box(int size)
{
    number_ = size;
    screws.resize(number_);
    nuts.resize(number_);
}

void Box::pushScrew(std::shared_ptr<IScrew> screw)
{
    if (screwNumber == number_) {
        return;
    } else {
        screwNumber++;
        screws[screwNumber-1] = screw;
    }
}

void Box::pushNut(std::shared_ptr<INut> nut)
{
    if (nutNumber == number_) {
        return;
    } else {
        nutNumber++;
        nuts[nutNumber-1] = nut;
    }
}

void Box::showContent()
{
    int i;
    for (i = 0; i < screwNumber; i++) {
        screws[i]->print();
    }
    for (i = 0; i < nutNumber; i++) {
        nuts[i]->print();
    }
}
