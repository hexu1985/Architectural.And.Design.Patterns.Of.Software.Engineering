#include "file_access.h"
#include <iostream>

FileAccess::FileAccess(const std::string &name): name(name) {
    std::cout << "Real Object instantiated." << "\n";
}

std::string FileAccess::getName() {
    return name;
}

std::string FileAccess::getContent() {
    return "Date from " + name;
}

