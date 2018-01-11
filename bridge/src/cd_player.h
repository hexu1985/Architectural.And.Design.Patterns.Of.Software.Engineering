#ifndef __cd_player_h
#define __cd_player_h

#include "i_player_implementer.h"
#include "play_data.h"

class CDPlayer: public IPlayerImplementer {
public:
    void jumpToTrack(int songNumber) override;

    PlayData readData() override;

    void turnOff() override;
};

#endif
