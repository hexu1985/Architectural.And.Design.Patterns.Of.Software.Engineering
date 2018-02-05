#ifndef __i_command_h
#define __i_command_h

class ICommand {
public:
    virtual ~ICommand() {}

    virtual void execute() = 0;
};

#endif
