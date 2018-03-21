#include <iostream>
#include "newsletter.h"
#include "subscriber.h"

int main(int argc, char *argv[])
{
    auto newsletter = std::make_shared<Newsletter>();
    auto andreas = std::make_shared<Subscriber>("Andreas"); 
    auto birgit = std::make_shared<Subscriber>("Birgit"); 

    newsletter->signIn(andreas);
    newsletter->signIn(birgit);
    newsletter->modifyMessage("News 1");
    std::cout << "\n";

    newsletter->signOut(andreas);
    newsletter->modifyMessage("News 2");

    newsletter->signOut(birgit);
    newsletter->modifyMessage("News 3");

    return 0;
}
