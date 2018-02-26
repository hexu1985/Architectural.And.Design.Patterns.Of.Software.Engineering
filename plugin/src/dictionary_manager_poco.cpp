#include <iostream>
#include <Poco/SharedLibrary.h>
#include "dictionary_manager.h"

DictionaryManager DictionaryManager::dictionaryManager; 

std::vector<std::string> DictionaryManager::getDictionaryPaths() {
    std::vector<std::string> paths;
    paths.push_back("./dictionaries/libgerman_english_dictionary.so");
    paths.push_back("./dictionaries/libgerman_french_dictionary.so");
    return paths;
}

IDictionary *DictionaryManager::loadDictionary(const std::string &path) {
    Poco::SharedLibrary lib(path.c_str());

    typedef IDictionary *(*get_dictionary_func_ptr)();
    get_dictionary_func_ptr get_dictionary = (get_dictionary_func_ptr) lib.getSymbol("get_dictionary");

    IDictionary *dictionary = get_dictionary();
    return dictionary;
}
