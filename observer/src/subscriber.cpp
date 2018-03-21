#include <iostream>
#include "i_observable.h"
#include "subscriber.h"

void Subscriber::update(IObservable *o)
{
    std::cout << "New message for " << name << ". " << "\n";
    std::cout << "Message: " << o->getCondition() << "\n";
}
