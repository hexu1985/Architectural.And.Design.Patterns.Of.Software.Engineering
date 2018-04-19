#ifndef __box_h
#define __box_h

#include <vector>
#include <memory>
#include "i_screw.h"
#include "i_nut.h"

class Box {
private:
    int number_;
    int screwNumber;
    int nutNumber;
    std::vector<std::shared_ptr<IScrew>> screws;
    std::vector<std::shared_ptr<INut>> nuts;

public:
    Box(int size);

    int number() { return number_; }

    void pushScrew(std::shared_ptr<IScrew> screw);
    void pushNut(std::shared_ptr<INut> nut);

    void showContent();
};

#endif
