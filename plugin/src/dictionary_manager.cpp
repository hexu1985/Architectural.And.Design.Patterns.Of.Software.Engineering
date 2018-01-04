#include <iostream>
#include <dlfcn.h>
#include "dictionary_manager.h"

DictionaryManager DictionaryManager::dictionaryManager; 

std::vector<std::string> DictionaryManager::getDictionaryPaths() {
    std::vector<std::string> paths;
    paths.push_back("./german_english.so");
    paths.push_back("./german_french.so");
    return paths;
}

IDictionary *DictionaryManager::loadDictionary(const std::string &path) {
    struct DlHandleGuard {
        void *handle = nullptr;

        DlHandleGuard(void *handle) {
            this->handle = handle;
        }

        ~DlHandleGuard() {
            dlclose(handle);
        }
    };

    void *handle = dlopen(path.c_str(), RTLD_NOW);
    if (handle == NULL) {
        std::cout << "load " << path << " error: " << dlerror() << std::endl;
        return NULL;
    }

    DlHandleGuard guard(handle);

    typedef IDictionary *(*get_dictionary_func_ptr)();
    get_dictionary_func_ptr get_dictionary = (get_dictionary_func_ptr) dlsym(handle, "get_dictionary");
    if (get_dictionary == NULL) {
        std::cout << "get symbol get_dictionary error: " << dlerror() << std::endl;
        return NULL;
    }

    IDictionary *dictionary = get_dictionary();
    return dictionary;
}
