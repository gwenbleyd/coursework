#ifndef COURSEWORK_ITERATOR_H
#define COURSEWORK_ITERATOR_H

template<typename elemType>
class Iterator {
private:
    elemType *_value;
public:
    typedef elemType& reference;
    typedef elemType* pointer;

    Iterator(elemType*);
    Iterator(const Iterator &);
    bool operator!=(Iterator const& other) const;
    bool operator==(Iterator const& other) const;
    Iterator<elemType> &operator++();
    Iterator<elemType> &operator++(elemType);
    Iterator<elemType>::reference operator*() const;
    Iterator<elemType>::pointer operator->() const;
};

#endif