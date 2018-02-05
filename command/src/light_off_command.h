#ifndef __light_off_command_h
#define __light_off_command_h

#include <memory>
#include "i_command.h"

class LightSource;

class LightOffCommand: public ICommand {
private:
    std::shared_ptr<LightSource> light;

public:
    LightOffCommand(std::shared_ptr<LightSource> light): light(light) {}

    void execute() override;
};

#endif
