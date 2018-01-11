#ifndef __player_h
#define __player_h

#include <memory>
#include "i_player_implementer.h"

class Player {
protected:
    std::unique_ptr<IPlayerImplementer> impl;

public:
    Player(std::unique_ptr<IPlayerImplementer> impl);

    void playFrom(int songNumber);

    void turnOff();
};

#endif
