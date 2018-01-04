#ifndef __dictionary_manager_h
#define __dictionary_manager_h

#include <map>
#include <vector>
#include <string>
#include "i_dictionary.h"

class DictionaryManager {
private:
    std::map<std::string, IDictionary *> dictionaryMap;
    static DictionaryManager dictionaryManager; 

    DictionaryManager() {}

public:
    static DictionaryManager &getInstance() {
        return dictionaryManager;
    }

    void loadExistingDictionaries() {
        std::vector<std::string> dictionary_paths = getDictionaryPaths();

        for (auto &path : dictionary_paths) {
            IDictionary *dictionary = loadDictionary(path);
            if (dictionary == NULL)
                continue;

            dictionaryMap.emplace(dictionary->getLanguage(), dictionary);
        }
    }

    std::string getTranslation(const std::string &language, const std::string &word) {
        IDictionary *currentDictionary = dictionaryMap[language];
        if (currentDictionary == NULL) {
            return "";
        }

        std::string tranlatedWord = currentDictionary->getTranslation(word.c_str());
        return tranlatedWord;
    }

    std::vector<std::string> getAllDictionaries() {
        std::vector<std::string> dictionaries;
        for (auto &pair : dictionaryMap) {
            dictionaries.push_back(pair.first);
        }
        return dictionaries;
    }

private:
    std::vector<std::string> getDictionaryPaths();
    IDictionary *loadDictionary(const std::string &path);
};

#endif
