//
//  main.cpp
//  TypesOfRecursion
//
//  Created by Rodrigo Dinis on 15/11/23.
//

#include <iostream>
#include "../recursion.h"
#include "recursion.cpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // call tail recursion
    cout << "call tail recursion..." << endl;
    TailRecursion<int> *tr = new TailRecursion<int>();
    
    tr->tail(10);
    
    delete tr;

    // call head recursion
    cout << "call head recursion..." << endl;
    HeadRecursion<int> *hr = new HeadRecursion<int>();
    
    hr->head(10);
    
    delete hr;
    
    cout << "call tree recursion..." << endl;
    TreeRecursion<int> *ttr = new TreeRecursion<int>();
    
    ttr->tree(3);
    
    delete ttr;
    
    return 0;
}
