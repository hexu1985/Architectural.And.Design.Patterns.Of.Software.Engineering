#ifndef __singleton_test_thread_h
#define __singleton_test_thread_h

#include <iostream>

class SingletonTestThread {
public:
    std::string threadName;

    SingletonTestThread(const std::string tName);

    void run();
};

#endif
