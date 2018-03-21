#ifndef __newsletter_h
#define __newsletter_h

#include <list>
#include <memory>
#include <string>
#include "i_observable.h"

class Newsletter: public IObservable {
private:
    std::list<std::shared_ptr<IObserver>> subscribers;
    std::string message;

public:
    void modifyMessage(const std::string &newMessage);

    void signIn(std::shared_ptr<IObserver> observer) override;
    void signOut(std::shared_ptr<IObserver> observer) override;
    std::string getCondition() override;

private:
    void notify();
};

#endif
