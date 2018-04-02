#ifndef __i_iterator_h
#define __i_iterator_h

class Employee;

class IIterator {
public:
    virtual ~IIterator() {}
    virtual bool hasNext() = 0;
    virtual Employee &next() = 0;
};

#endif
