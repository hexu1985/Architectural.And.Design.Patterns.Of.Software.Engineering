#ifndef __subscriber_h
#define __subscriber_h

#include "i_observer.h"

class Subscriber: public IObserver {
private:
    std::string name;

public:
    Subscriber(const std::string &name): name(name) {}

    void update(IObservable *o) override;
};

#endif
