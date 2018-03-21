#ifndef __alarmsystem_active_h
#define __alarmsystem_active_h

#include "i_alarmsystem_state.h"

class AlarmsystemActive: public IAlarmsystemState {
public:
    void personRecognized() override;
};

#endif
