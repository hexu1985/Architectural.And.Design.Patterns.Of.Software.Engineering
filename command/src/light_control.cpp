#include "i_command.h"
#include "light_control.h"

void LightControl::setCommand(std::shared_ptr<ICommand> command)
{
    this->command = command;
}

void LightControl::activate()
{
    command->execute();
}
