//
//  main.cpp
//  TreeRecursion
//
//  Created by Rodrigo Dinis on 28/08/23.
//

#include <iostream>

void fun(int n) {
    if (n > 0) {
        std::cout << n ;
        fun(n-1);
        fun(n-1);
    }
}

int main(int argc, const char * argv[]) {
    fun(5);
    return 0;
}
