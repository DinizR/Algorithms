//
//  main.cpp
//  Arrays
//
//  Created by Rodrigo Dinis on 6/12/23.
//

#include <iostream>
#include "ArrayList.h"

using namespace std;

void traversing(void);
void dynamicArray(void);
void printArray(int array[], int size);

int main(int argc, const char * argv[]) {
    //traversing();
    //dynamicArray();
    
    ArrayList<int> *play = new ArrayList<int>();
    
    play->add(2);
    play->add(4);
    play->add(6);
    play->add(8);
    play->add(10);
    play->add(12);
    play->add(14);
    play->add(16);
    play->add(18);
    play->add(20);
    play->add(22);
    
    for (int i = 0; i < play->getSize(); i++) {
        cout << "play[" << i << "] = " << play->get(i) << endl;
    }
    
    play->remove(5);
    play->remove(4);
    play->remove(3);
    play->remove(2);
    play->remove(1);
    play->remove(0);

    for (int i = 0; i < play->getSize(); i++) {
        cout << "play[" << i << "] = " << play->get(i) << endl;
    }
    play->add(22);

    cout << "size = " << play->getSize() << " capacity = " << play->getCapacity() << endl;

    return 0;
}

void traversing(void) {
    int array[10] = {0}; // this declares and initialize the array with zeros in all elements.
    int size = sizeof(array) / sizeof(int);
    
    printArray(array, size);
}

// Dynamic arrays are only possible on C++, not on C
void dynamicArray(void) {
    int size;
    
    std::cout << "Enter the array size: ";
    std::cin >> size;
    int array[size];
    printArray(array, size);
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "array[" << i << "]=" << array[i] << std::endl;
        printf("Contiguous address of the array[%i]: %u \n",i, &array[i]);
    }
}
