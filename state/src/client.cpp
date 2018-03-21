#include <iostream>
#include "alarmsystem.h"

int main(int argc, char *argv[])
{
    auto a = std::make_shared<Alarmsystem>();

    std::cout << "Deactivate the system..." << "\n";
    std::cout << "When customer drive that bothers." << "\n";
    a->turnOff();

    std::cout << "Person recognized." << "\n";
    a->personRecognized();

    std::cout << "Closing time" << "\n";
    std::cout << "Activation of the alarm system" << "\n";
    a->turnOn();

    std::cout << "Person recognized." << "\n";
    a->personRecognized();

    return 0;
}
