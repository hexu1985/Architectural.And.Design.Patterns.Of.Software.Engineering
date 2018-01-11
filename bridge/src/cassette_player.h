#ifndef __cassette_player_h
#define __cassette_player_h

#include "i_player_implementer.h"
#include "play_data.h"

class CassettePlayer: public IPlayerImplementer {
private:
    int currentTrack;

public:
    CassettePlayer();

    void jumpToTrack(int songNumber) override;

    PlayData readData() override;

    void turnOff() override;
};

#endif
