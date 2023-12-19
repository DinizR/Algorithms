//
//  recursion.h
//  TypesOfRecursion
//
//  Created by Rodrigo Dinis on 16/11/23.
//

#ifndef recursion_h
#define recursion_h

/** 
 ** Tail recursion is a recursion type where the recursive function call is the last
 ** statement in the function.
 **/
template <class T>
class TailRecursion {
public:
    TailRecursion();
    void tail(T n);
    ~TailRecursion();
};


/**
 ** Head recursion is a recursion type where the recursive function call is the first
 ** statement in the function after the limit check ("if" statement).
 **/
template <class T>
class HeadRecursion {
public:
    HeadRecursion();
    void head(T n);
    ~HeadRecursion();
};

/**
 ** Tree recursion is a recursion type where the recursive function callled more
 ** than one time (it is a non-linear recursion).
 **/
template <class T>
class TreeRecursion {
public:
    TreeRecursion();
    void tree(T n);
    ~TreeRecursion();
};

template <class T>
class IndirectRecursion {
public:
    
};

template <class T>
class NestedRecursion {
public:
    
};

#endif /* recursion_h */
