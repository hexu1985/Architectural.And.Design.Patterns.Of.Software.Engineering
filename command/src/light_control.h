#ifndef __light_control_h
#define __light_control_h

#include <memory>

class ICommand;

class LightControl {
private:
    std::shared_ptr<ICommand> command;

public:
    void setCommand(std::shared_ptr<ICommand> command);

    void activate();
};

#endif
