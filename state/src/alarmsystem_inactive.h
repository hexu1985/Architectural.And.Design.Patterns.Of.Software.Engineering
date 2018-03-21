#ifndef __alarmsystem_inactive_h
#define __alarmsystem_inactive_h

#include "i_alarmsystem_state.h"

class AlarmsystemInactive: public IAlarmsystemState {
public:
    void personRecognized() override;
};

#endif
