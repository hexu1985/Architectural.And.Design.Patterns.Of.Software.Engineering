#include "proxy_file_access.h"
#include <iostream>
#include "file_access.h"

ProxyFileAccess::ProxyFileAccess(const std::string name): name(name) {
    std::cout << "Representative Object instantiated." << "\n";
}

std::string ProxyFileAccess::getContent() {
    if (realFile == NULL) {
        std::cout << "Content is not available locally" << "\n";
        realFile = std::make_shared<FileAccess>(name);
    }
    return realFile->getContent();
}

std::string ProxyFileAccess::getName() {
    return name;
}

