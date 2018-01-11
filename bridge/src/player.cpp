#include <iostream>
#include "i_player_implementer.h"
#include "player.h"

using namespace std;

Player::Player(unique_ptr<IPlayerImplementer> impl) {
    this->impl = move(impl);
}

void Player::playFrom(int songNumber) {
    impl->jumpToTrack(songNumber);
    PlayData dat = impl->readData();
    cout << dat << "\n";
}

void Player::turnOff() {
    impl->turnOff();
}
