#ifndef __i_datastructure_h
#define __i_datastructure_h

#include <memory>

class IIterator;

class IDatastructure {
    virtual std::shared_ptr<IIterator> generateIterator() = 0; 
};

#endif
