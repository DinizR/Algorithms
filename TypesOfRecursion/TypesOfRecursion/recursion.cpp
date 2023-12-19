//
//  recursion.cpp
//  TypesOfRecursion
//
//  Created by Rodrigo Dinis on 19/12/23.
//

#include <iostream>
#include "../recursion.h"

using namespace std;

// Implementations
// --------- Tail Recursion -------------- //
template <class T>
TailRecursion<T>::TailRecursion() {
}

template <class T>
void TailRecursion<T>::tail(T n) {
    if (n > 0) {
        cout << n << endl;
        tail(n-1);
    }
}

template <class T>
TailRecursion<T>::~TailRecursion() {
    cout << "Destroying object ..." << endl;
}

// --------- Head Recursion -------------- //
template <class T>
HeadRecursion<T>::HeadRecursion() {
}

template <class T>
void HeadRecursion<T>::head(T n) {
    if (n > 0) {
        head(n-1);
        cout << n << endl;
    }
}

template <class T>
HeadRecursion<T>::~HeadRecursion() {
    cout << "Destroying object ..." << endl;
}

// --------- Tree Recursion -------------- //
template <class T>
TreeRecursion<T>::TreeRecursion() {
}

template <class T>
void TreeRecursion<T>::tree(T n) {
    if (n > 0) {
        cout << n << endl;
        tree(n-1);
        tree(n-1);
    }
}

template <class T>
TreeRecursion<T>::~TreeRecursion() {
    cout << "Destroying object ..." << endl;
}
