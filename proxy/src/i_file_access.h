#ifndef __i_file_access_h
#define __i_file_access_h

#include <string>

class IFileAccess {
public:
    virtual std::string getName() = 0;
    virtual std::string getContent() = 0;
};

#endif
