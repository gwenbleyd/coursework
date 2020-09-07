#ifndef COURSEWORK_ARRAY_H
#define COURSEWORK_ARRAY_H

#include <iostream>
#include <cassert>

template <class elemType>

class Array {
public:
    Array();
    explicit Array(unsigned int);
    unsigned int size();
    bool search(const elemType&);
    elemType& operator[](unsigned int);
    void clear();
    bool empty();
    void reallocate(unsigned int);
    void insert(elemType, unsigned int);
    void push_back(elemType);
    void push_front(elemType);
    void remove(unsigned int);
    void pull_back();
    void pull_front();
    ~Array();
private:
    unsigned int _size;
    elemType * _data;

};


#endif //COURSEWORK_ARRAY_H
