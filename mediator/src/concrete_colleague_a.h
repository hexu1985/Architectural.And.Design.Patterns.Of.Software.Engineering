#ifndef __concrete_colleague_a_h
#define __concrete_colleague_a_h

#include <iostream>
#include "colleague.h"

class ConcreteColleagueA: public Colleague {
public:
    ConcreteColleagueA(Mediator *m): Colleague(m) {
        std::cout << "ConcreteColleagueA: instantiated\n";
    }

    void methodA() {
        std::cout << "ConcreteColleagueA is changed in method"
            << " following the change of a colleague\n";
    }

    void change() override {
        std::cout << "ConcreteColleagueA was changed by calling the method change()."
            << " ConcreteColleagueA informs the Mediator\n";
        Colleague::change();
    }
};

#endif
