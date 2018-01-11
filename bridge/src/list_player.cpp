#include <iostream>
#include "play_data.h"
#include "list_player.h"

using namespace std;

ListPlayer::ListPlayer(std::unique_ptr<IPlayerImplementer> impl, vector<int> list): Player(move(impl)), list(list) {
}

void ListPlayer::playAndTurnOff() {
    for (int i: list) {
        impl->jumpToTrack(i);
        PlayData data = impl->readData();
        cout << data << "\n";
    }
    impl->turnOff();
}
