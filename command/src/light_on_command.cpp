#include "light_source.h"
#include "light_on_command.h"

void LightOnCommand::execute() 
{
    light->on();
}

