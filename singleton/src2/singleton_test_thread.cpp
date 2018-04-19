#include "singleton_test_thread.h"
#include "tool_tip_manager2.h"
#include <thread>
#include <chrono>
#include <iostream>

using namespace std;

SingletonTestThread::SingletonTestThread(const std::string tName): threadName(tName)
{
}

void SingletonTestThread::run()
{
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << threadName + " - call 1\n";
    ToolTipManager2::getInstance().operation();
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << threadName + " - call 2\n";
    ToolTipManager2::getInstance().operation();
    this_thread::sleep_for(chrono::milliseconds(500));
    cout << threadName + " - call 3\n";
    ToolTipManager2::getInstance().operation();
}
