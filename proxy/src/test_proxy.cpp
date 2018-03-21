#include "proxy_file_access.h"
#include <iostream>

int main(int argc, char *argv[]) {
    auto pFile = std::make_shared<ProxyFileAccess>("TestFile.dat");
    std::cout <<" \n";
    std::cout << "Name: " + pFile->getName() <<" \n";
    std::cout << "Content: " + pFile->getContent() <<" \n";
    std::cout <<" \n";
    std::cout << "Content: " + pFile->getContent() <<" \n";

    return 0;
}
