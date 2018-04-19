#include "tool_tip_manager.h"
#include <iostream>

ToolTipManager *ToolTipManager::instance = NULL;

ToolTipManager::ToolTipManager()
{
    std::cout << "New Singleton generated." << std::endl;
}

ToolTipManager &ToolTipManager::getInstance()
{
    if (instance == NULL) {
        instance = new ToolTipManager;
    }
    return *instance;
}

void ToolTipManager::operation()
{
    std::cout << "operation() called." << std::endl;
}
