#include "Iterator.h"

template<typename elemType>
Iterator<elemType>::Iterator(elemType *value) {
    _value = value;
}

template<typename elemType>
Iterator<elemType>::Iterator(const Iterator &it) {
 _value = it._value;
}

template<typename elemType>
bool Iterator<elemType>::operator!=(const Iterator &other) const {
    return _value != other._value;
}

template<typename elemType>
bool Iterator<elemType>::operator==(const Iterator &other) const {
    return _value == other._value;
}

template<typename elemType>
Iterator<elemType> &Iterator<elemType>::operator++() {
    ++_value;
    return *this;
}

template<typename elemType>
typename Iterator<elemType>::reference Iterator<elemType>::operator*() const {
    return *_value;
}

template<typename elemType>
typename Iterator<elemType>::pointer Iterator<elemType>::operator->() const {
    return _value;
}

template<typename elemType>
Iterator<elemType> & Iterator<elemType>::operator++(elemType junk) {
    Iterator<elemType> i = *this;
    _value++;
    return i;
}




