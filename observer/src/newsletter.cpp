#include "newsletter.h"
#include "i_observer.h"

void Newsletter::modifyMessage(const std::string &newMessage)
{
    message = newMessage;
    notify();
}

void Newsletter::signIn(std::shared_ptr<IObserver> observer) 
{
    subscribers.push_back(observer);
}

void Newsletter::signOut(std::shared_ptr<IObserver> observer) 
{
    subscribers.remove(observer);
}

std::string Newsletter::getCondition() 
{
    return message;
}

void Newsletter::notify()
{
    for (auto observer: subscribers) {
        observer->update(this);
    }
}


