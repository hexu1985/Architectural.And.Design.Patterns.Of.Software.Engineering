#ifndef __i_observer_h
#define __i_observer_h

class IObservable;

class IObserver {
public:
    virtual ~IObserver() {}
    virtual void update(IObservable *o) = 0;
};

#endif
