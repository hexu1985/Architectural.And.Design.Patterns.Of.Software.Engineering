#include <iostream>
#include "concrete_mediator.h"
#include "concrete_colleague_b.h"
#include "concrete_colleague_a.h"

int main(int argc, char *argv[])
{
    std::cout << "Initialization:\n";
    ConcreteMediator concreteMediator;

    ConcreteColleagueA colleagueA(&concreteMediator);
    concreteMediator.setColleagueA(&colleagueA);

    ConcreteColleagueB colleagueB(&concreteMediator);
    concreteMediator.setColleagueB(&colleagueB);

    std::cout << "ColleagueA change:\n";
    colleagueA.change();

    std::cout << "ColleagueB change:\n";
    colleagueB.change();

    return 0;
}
