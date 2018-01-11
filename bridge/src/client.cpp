#include <memory>
#include <vector>
#include "player.h"
#include "list_player.h"
#include "cd_player.h"
#include "cassette_player.h"

int main(int argc, char *argv[])
{
    std::unique_ptr<Player> a(new Player(std::make_unique<CDPlayer>()));
    a->playFrom(3);

    std::unique_ptr<Player> b(new Player(std::make_unique<CassettePlayer>()));
    b->playFrom(5);

    std::vector<int> playlist;
    playlist.push_back(1);
    playlist.push_back(9);
    playlist.push_back(3);

    ListPlayer l(std::make_unique<CDPlayer>(), playlist);
    l.playAndTurnOff();

    return 0;
}
