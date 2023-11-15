//
//  main.cpp
//  Structure
//
//  Created by Rodrigo Dinis on 29/06/23.
//

#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>

using namespace std;

template <class T>
class Arithmetic {
private:
    T A;
    T B;
public:
    Arithmetic(T A, T B) {
        this->A = A;
        this->B = B;
    }
    
    T add();
    
    T sub();
       
    ~Arithmetic() {
        cout << "Destroying object..." << endl;
    }
};

template <class T>
T Arithmetic<T>::add() {
    return A + B;
}

template <class T>
T Arithmetic<T>::sub() {
    return A - B;
}

int main() {
    Arithmetic<int> a1(10,20);
    
    cout << "Add 10 + 20 = " << a1.add() << endl;
    cout << "Sub 10 - 20 = " << a1.sub() << endl;
    
    Arithmetic<float> a2(1.5f, 10.0f);
    cout << "Add 1.5 + 10.0 = " << a2.add() << endl;
    cout << "Sub 1.5 - 10.0 = " << a2.sub() << endl;
}
