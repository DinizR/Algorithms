//
//  main.cpp
//  SimpleRecursion
//
//  Created by Rodrigo Dinis on 21/08/23.
//

#include <iostream>

using namespace std;

template <class T>
class PlayRecursion {
public:
    
    void printDec(T number);
    
    void printInc(T start, T number);
    
    T factorial(T number);
    
    T exponent(T m, T n);
    
    ~PlayRecursion() {
        cout << "Destructing object ..." << endl;
    }
};

template<class T>
T PlayRecursion<T>::exponent(T m, T n) {
    if (n == 0)
        return m;
    else
        return exponent(m, n-1) * n;
}

template<class T>
void PlayRecursion<T>::printDec(T number) {
    if (number > 0) {
        cout << number << endl;
        printDec(--number);
    }
}

template<class T>
void PlayRecursion<T>::printInc(T start, T number) {
    if (start <= number) {
        cout << start << endl;
        printInc(++start, number);
    }
}

template<class T>
T PlayRecursion<T>::factorial(T n) {
    if (n == 0) {
        return 1;
    } else {
        return factorial(n-1) * n;
    }
}

int main(int argc, const char * argv[]) {
    PlayRecursion<int> play;
    
    //play.printDec(10);
    //play.printInc(1, 10);
    cout << "factorial of 4 = " << play.factorial(4) << endl;
    cout << "2 ^ 2 = " << play.exponent(2, 2) << endl;
    
    return 0;
}
