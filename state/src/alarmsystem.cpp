#include "i_alarmsystem_state.h"
#include "alarmsystem_active.h"
#include "alarmsystem_inactive.h"
#include "alarmsystem.h"

Alarmsystem::Alarmsystem(): active(std::make_shared<AlarmsystemActive>()), inactive(std::make_shared<AlarmsystemInactive>())
{
    state = inactive;
}

void Alarmsystem::turnOn()
{
    modifyState(active);
}

void Alarmsystem::turnOff()
{
    modifyState(inactive);
}

void Alarmsystem::personRecognized()
{
    state->personRecognized();
}

void Alarmsystem::modifyState(std::shared_ptr<IAlarmsystemState> newState)
{
    state = newState;
}

