#ifndef __file_access_h
#define __file_access_h

#include "i_file_access.h"

class FileAccess: public IFileAccess {
private:
    std::string name;

public:
    FileAccess(const std::string &name);

    std::string getName() override;
    std::string getContent() override;
};

#endif
