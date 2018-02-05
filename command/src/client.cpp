#include <memory>
#include "light_control.h"
#include "light_source.h"
#include "light_on_command.h"
#include "light_off_command.h"

int main(int argc, char *argv[])
{
    auto control = std::make_unique<LightControl>();
    auto light = std::make_shared<LightSource>();

    auto lightOn = std::make_shared<LightOnCommand>(light);
    auto lightOff = std::make_shared<LightOffCommand>(light);

    control->setCommand(lightOn);
    control->activate();

    control->setCommand(lightOff);
    control->activate();

    return 0;
}
