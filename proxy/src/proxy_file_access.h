#ifndef __proxy_file_access_h
#define __proxy_file_access_h

#include <memory>
#include "i_file_access.h"

class ProxyFileAccess: public IFileAccess {
private:
    std::string name;
    std::shared_ptr<IFileAccess> realFile;

public:
    ProxyFileAccess(const std::string name);

    std::string getName() override;
    std::string getContent() override;
};

#endif
