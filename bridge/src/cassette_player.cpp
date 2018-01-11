#include <iostream>
#include <cmath>
#include "cassette_player.h"

using std::cout;

CassettePlayer::CassettePlayer() {
    cout << "Coil at the Beginning back\n";
    currentTrack = 1;
}

void CassettePlayer::jumpToTrack(int songNumber) {
    int diff = songNumber - currentTrack;

    if (diff > 0) {
        cout << "Coil around " << diff << " Tracks in front.\n";
    } else {
        cout << "Coil around " << abs(diff)+1 << " Tracks back.\n";
    }

    cout << "Now we are at the right place " 
        << "Location(Song: " << songNumber << ")\n";
    currentTrack = songNumber;
}

PlayData CassettePlayer::readData() {
    return PlayData("Cassette-Data");
}

void CassettePlayer::turnOff() {
    cout << "Cassette-Player switched off.\n";
}
