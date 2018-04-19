#ifndef __tool_tip_manager_h
#define __tool_tip_manager_h

class ToolTipManager {
private:
    static ToolTipManager *instance;

    ToolTipManager();

public:
    static ToolTipManager &getInstance(); 

    void operation();
};

#endif
