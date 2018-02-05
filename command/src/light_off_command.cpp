#include "light_source.h"
#include "light_off_command.h"

void LightOffCommand::execute() 
{
    light->off();
}

