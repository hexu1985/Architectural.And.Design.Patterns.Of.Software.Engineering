#ifndef __light_on_command_h
#define __light_on_command_h

#include <memory>
#include "i_command.h"

class LightSource;

class LightOnCommand: public ICommand {
private:
    std::shared_ptr<LightSource> light;

public:
    LightOnCommand(std::shared_ptr<LightSource> light): light(light) {}

    void execute() override;
};

#endif
