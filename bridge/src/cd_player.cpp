#include <iostream>
#include "cd_player.h"

using std::cout;

void CDPlayer::jumpToTrack(int songNumber) {
    cout << "Search the table of contents\n";
    cout << "Jump to song " << songNumber
        << " by by Positioning the Laser.\n";
}

PlayData CDPlayer::readData() {
    return PlayData("CD-Data");
}

void CDPlayer::turnOff() {
    cout << "CD-Player switched off.\n";
}
