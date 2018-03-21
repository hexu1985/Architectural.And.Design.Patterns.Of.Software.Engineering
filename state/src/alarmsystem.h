#ifndef __alarmsystem_h
#define __alarmsystem_h

#include <memory>

class IAlarmsystemState;

class Alarmsystem {
private:
    std::shared_ptr<IAlarmsystemState> active;
    std::shared_ptr<IAlarmsystemState> inactive;
    std::shared_ptr<IAlarmsystemState> state;

public:
    Alarmsystem();

    void turnOn();
    void turnOff();

    void personRecognized();

private:
    void modifyState(std::shared_ptr<IAlarmsystemState> newState);
};

#endif

