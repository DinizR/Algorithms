//
//  ArrayList.cpp
//  Arrays
//
//  Created by Rodrigo Dinis on 16/12/23.
//

#include "ArrayList.h"
#include <iostream>

#ifndef ArrayList_impl_h
#define ArrayList_impl_h

using namespace std;

// Implementations
template <class T>
ArrayList<T>::ArrayList() {
    capacity = DEFAULT_CAPACITY;
    array = new T[capacity];
}

template <class T>
ArrayList<T>::ArrayList(int initialCapacity) {
    array = new T[initialCapacity];
}

template <class T>
ArrayList<T>::~ArrayList() {
    delete[] array;
    cout << "Destroying object ..." << endl;
}

template <class T>
void ArrayList<T>::swapToNew() {
    T* tmp = new T[capacity];
    
    memcpy(tmp, array, size * sizeof(T));
    
    delete[] array;
    
    array = tmp;
}

template <class T>
void ArrayList<T>::add(T value) {
    
    // does it needs more allocation?
    if (size == capacity) {
        capacity *= 2;
        swapToNew();
    }
    
    // adds new value and increments size
    array[size++] = value;
}

template <class T>
void ArrayList<T>::remove(int index) {
    if (index >= size || index < 0) {
        throw std::out_of_range("Index out of bounds.");
    }
    
    std::copy(array + index + 1, array + size, array + index);
    
    size--;
    
    if (size <= capacity / 2) {
        capacity = capacity / 2;
        swapToNew();
    }
}

template <class T>
bool ArrayList<T>::contains(T value) {
    for (int i = 0; i < size; i++) {
        if (array[i] == value)
            return true;
    }
    return false;
}

template <class T>
T ArrayList<T>::get(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of bounds.");
    }

    return array[index];
}

template <class T>
int ArrayList<T>::getSize() {
    return size;
}

template <class T>
int ArrayList<T>::getCapacity() {
    return capacity;
}

#endif /* ArrayList_impl_h */
