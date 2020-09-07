#include "Array.h"

template <class elemType>
Array<elemType>::Array() {
    _size = 0;
    _data = nullptr;
}

template <class elemType>
Array<elemType>::Array(unsigned int size) {
    assert(size >= 0);
    _size = size;
    if (_size > 0)
        _data = new elemType[_size];
    else
        _data = nullptr;
}

template<class elemType>
unsigned int Array<elemType>::size() {
    return _size;
}

template<class elemType>
bool Array<elemType>::search(const elemType& element) {
    assert(_size >= 0);

    for (int i = 0; i < _size; ++i) {
        if (element == _data[i])
            return true;
    }
    return false;
}

template<class elemType>
Array<elemType>::~Array() {
    delete [] _data;
    _data = nullptr;
}

template<class elemType>
elemType &Array<elemType>::operator[](unsigned int index) {
    assert(index >= 0 && index < _size);
    return _data[index];
}

template<class elemType>
bool Array<elemType>::empty() {
    if(_data == nullptr && _size == 0)
        return false;
    else
        return true;
}

template<class elemType>
void Array<elemType>::clear() {
    delete [] _data;
    _data = nullptr;
    _size = 0;
}

template<class elemType>
void Array<elemType>::reallocate(unsigned int size) {
    clear();
    if (size == 0)
        return;
    _data = new elemType[size];
    _size = size;
}

template<class elemType>
void Array<elemType>::insert(elemType value, unsigned int index) {
    assert(index >= 0 && index <= _size);

    auto *data = new elemType[_size + 1];
    for (int i = 0; i < index; ++i)
        data[i] = _data[i];

    data[index] = value;

    for (int i = index; i < _size; ++i)
        data[i + 1] = _data[i];
    delete [] _data;
    _data = nullptr;
    _data = data;
    _size++;
}

template<class elemType>
void Array<elemType>::push_back(elemType value) {
    insert(value, _size);
}

template<class elemType>
void Array<elemType>::push_front(elemType value) {
    insert(value, 0);
}

template<class elemType>
void Array<elemType>::remove(unsigned int index) {
    assert(index >= 0 && index <= _size);

    if (_size == 1){
        clear();
        return;
    }

    auto *data = new elemType[_size - 1];
    for (int i = 0; i < index; ++i)
        data[i] = _data[i];

    for (int i = index + 1; i < _size; ++i)
        data[i - 1] = _data[i];

    delete [] _data;
    _data = nullptr;
    _data = data;
    _size--;
}

template<class elemType>
void Array<elemType>::pull_back() {
    remove(_size - 1);
}

template<class elemType>
void Array<elemType>::pull_front() {
    remove(0);
}




