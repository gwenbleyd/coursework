#ifndef COURSEWORK_ARRAY_H
#define COURSEWORK_ARRAY_H

#include "Iterator.h"
#include <initializer_list>


template <class elemType>

class Array {
public:

    Array();
    explicit Array(unsigned int);
    Array(const std::initializer_list<elemType> &);
    Array(const Array<elemType> &);

    unsigned int size();
    bool search(const elemType&);

    elemType& operator[](unsigned int);
    Array<elemType> & operator=(const Array<elemType> &);

    void clear();

    bool empty();

    void reallocate(unsigned int);

    void insert(elemType, unsigned int);
    void push_back(elemType);
    void push_front(elemType);


    void remove(unsigned int);
    void pull_back();
    void pull_front();


    typedef Iterator<elemType> iterator;
    typedef const Iterator<elemType> const_iterator;
    iterator begin();
    iterator end();
    const_iterator rbegin() const;
    const_iterator rend() const;

    ~Array();
private:
    unsigned int _size{};
    elemType * _data;

};


#endif
