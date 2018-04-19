#ifndef __tool_tip_manager2_h
#define __tool_tip_manager2_h

class ToolTipManager2 {
private:
    static ToolTipManager2 instance;

    ToolTipManager2();

public:
    static ToolTipManager2 &getInstance(); 

    void operation();
};

#endif
