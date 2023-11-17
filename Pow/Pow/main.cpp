//
//  main.cpp
//  Pow
//
//  Created by Rodrigo Dinis on 15/11/23.
//

#include <iostream>

using namespace std;

template <class T>
class Maths {
public:
    T pow(T number, T n);
    
    ~Maths() {
        cout << "Destroying object ..." << endl;
    }
};

template<class T>
T Maths<T>::pow(T number, T n) {
    if (n == 1)
        return number;
    else
        return number * pow(number,n-1);
}

int main(int argc, const char * argv[]) {
    Maths<int> *maths = new Maths<int>;
    
    cout << "2^2 = " << maths->pow(2,2) << endl;
    cout << "2^3 = " << maths->pow(2,3) << endl;
    cout << "2^8 = " << maths->pow(2,8) << endl;
    
    delete maths;
    
    return 0;
}
