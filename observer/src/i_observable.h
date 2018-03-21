#ifndef __i_observable_h
#define __i_observable_h

#include <memory>
#include <string>

class IObserver;

class IObservable {
public:
    virtual void signIn(std::shared_ptr<IObserver> observer) = 0;
    virtual void signOut(std::shared_ptr<IObserver> observer) = 0;
    virtual std::string getCondition() = 0;
};

#endif
