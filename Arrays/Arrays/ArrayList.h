//
//  ArrayList.h
//  Arrays
//
//  Created by Rodrigo Dinis on 16/12/23.
//

#ifndef ArrayList_h
#define ArrayList_h

#include <iostream>

template <class T>
class ArrayList {
private:
    static const int DEFAULT_CAPACITY = 10;
    T *array;
    int size;
    int capacity;
    void swapToNew();
    
public:
    ArrayList();
    ArrayList(int initialCapacity);
    ~ArrayList();
    
    void add(T value);
    void remove(int index);
    bool contains(T value);
    T get(int index);
    int getSize();
    int getCapacity();
};

#endif /* ArrayList_h */
