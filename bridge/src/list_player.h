#ifndef __list_player_h
#define __list_player_h

#include <vector>
#include <memory>
#include "player.h"

class ListPlayer: public Player {
private:
    std::vector<int> list;

public:
    ListPlayer(std::unique_ptr<IPlayerImplementer> impl, std::vector<int> list);

    void playAndTurnOff();
};

#endif

