#ifndef __play_data_h
#define __play_data_h

#include <string>
#include <iostream>

class PlayData {
private:
    std::string data;

public:
    PlayData(const std::string &data) {
        this->data = data;
    }

    friend std::ostream &operator <<(std::ostream &out, const PlayData &play_data) {
        out << play_data.data;
        return out;
    }
};

#endif
