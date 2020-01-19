#include <iostream>
#include <windows.h>
#include "dictionary_manager.h"

DictionaryManager DictionaryManager::dictionaryManager; 

std::vector<std::string> DictionaryManager::getDictionaryPaths() {
    std::vector<std::string> paths;
    paths.push_back("german_english_dictionary.dll");
    paths.push_back("german_french_dictionary.dll");
    return paths;
}

IDictionary *DictionaryManager::loadDictionary(const std::string &path) {
    HINSTANCE handle = LoadLibrary(path.c_str());
    if (handle == NULL) {
        std::cout << "load " << path << " error" << std::endl;
        return NULL;
    }

    typedef IDictionary *(*get_dictionary_func_ptr)();
    get_dictionary_func_ptr get_dictionary = (get_dictionary_func_ptr) GetProcAddress(handle, "get_dictionary");
    if (get_dictionary == NULL) {
        std::cout << "get symbol get_dictionary error" << std::endl;
        FreeLibrary(handle);
        return NULL;
    }

    IDictionary *dictionary = get_dictionary();
    return dictionary;
}
