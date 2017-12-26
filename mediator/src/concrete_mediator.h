#ifndef concrete_mediator_h
#define concrete_mediator_h

#include <iostream>
#include "mediator.h"
#include "concrete_colleague_a.h"
#include "concrete_colleague_b.h"

class ConcreteMediator: public Mediator {
private:
    ConcreteColleagueA *colleagueA;
    ConcreteColleagueB *colleagueB;

public:
    ConcreteMediator() {
        std::cout << "ConcreteMediator: instantiated\n";
    }

    void changeOccurred(Colleague *colleague) override {
        if (colleague == (Colleague *) colleagueA) {
            std::cout << "ConcreteMediator: informing ColleagueB\n";
            colleagueB->methodB();
        } else if (colleague == (Colleague *) colleagueB) {
            std::cout << "ConcreteMediator: informing ColleagueA\n";
            colleagueA->methodA();
        }
    }

    void setColleagueA(ConcreteColleagueA *colleague) {
        colleagueA = colleague;
    }

    void setColleagueB(ConcreteColleagueB *colleague) {
        colleagueB = colleague;
    }
};

#endif
