#ifndef __i_player_implementer_h
#define __i_player_implementer_h

#include "play_data.h"

class IPlayerImplementer {
public:
    virtual void jumpToTrack(int songNumber) = 0;

    virtual PlayData readData() = 0;

    virtual void turnOff() = 0;
};

#endif
