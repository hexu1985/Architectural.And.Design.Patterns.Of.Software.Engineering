#include "tool_tip_manager2.h"
#include <iostream>

ToolTipManager2 ToolTipManager2::instance; 

ToolTipManager2::ToolTipManager2()
{
    std::cout << "New Singleton generated." << std::endl;
}

ToolTipManager2 &ToolTipManager2::getInstance()
{
    return instance;
}

void ToolTipManager2::operation()
{
    std::cout << "operation() called." << std::endl;
}
