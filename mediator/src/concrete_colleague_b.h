#ifndef __concrete_colleague_b_h
#define __concrete_colleague_b_h

#include <iostream>
#include "colleague.h"

class ConcreteColleagueB: public Colleague {
public:
    ConcreteColleagueB(Mediator *m): Colleague(m) {
        std::cout << "ConcreteColleagueB: instantiated\n";
    }

    void methodB() {
        std::cout << "ConcreteColleagueB is changed in method"
            << " following the change of a colleague\n";
    }

    void change() override {
        std::cout << "ConcreteColleagueB was changed by calling the method change()."
            << " ConcreteColleagueB informs the Mediator\n";
        Colleague::change();
    }
};

#endif

