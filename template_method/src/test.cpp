#include <iostream>
#include <memory>
#include "holidaycard_to_friends.h"
#include "holidaycard_to_company.h"  
                                    
int main(int argc, char *argv[])
{
    std::cout << "Card to the friends:" << "\n";
    auto cardFriends = std::make_shared<HolidaycardToFriends>();
    cardFriends->writeACard();
    std::cout << "\n";
    std::cout << "Card to the company:" << "\n";
    auto cardCompany = std::make_shared<HolidaycardToCompany>();
    cardCompany->writeACard();

    return 0;
}
