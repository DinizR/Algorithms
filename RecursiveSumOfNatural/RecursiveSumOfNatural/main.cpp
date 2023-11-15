//
//  main.cpp
//  RecursiveSumOfNatural
//
//  Created by Rodrigo Dinis on 28/08/23.
//

#include <iostream>

using namespace std;

template <class T>
class SumOfNatural {
public:
    SumOfNatural() {
    }
    
    T sum(T n) {
        if (n > 0) {
            return n + this->sum(n-1);
        } else {
            return 0;
        }
    }
    
    ~SumOfNatural() {
        cout << "Destroying object..." << endl;
    }
};

int main(int argc, const char * argv[]) {
    SumOfNatural<int> s;
    
    cout << s.sum(4) << endl;
    return 0;
}
