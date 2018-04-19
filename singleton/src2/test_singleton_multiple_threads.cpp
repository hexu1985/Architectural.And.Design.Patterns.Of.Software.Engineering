#include "singleton_test_thread.h"
#include <thread>

using namespace std;

int main(int argc, char *argv[])
{
    SingletonTestThread s1("Thread 1");
    SingletonTestThread s2("Thread 2");
    SingletonTestThread s3("Thread 3");

    thread t1(&SingletonTestThread::run, &s1); 
    thread t2(&SingletonTestThread::run, &s2); 
    thread t3(&SingletonTestThread::run, &s3); 

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
