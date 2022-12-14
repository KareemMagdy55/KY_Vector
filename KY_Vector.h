#pragma once
#include <iostream>
using namespace std;

template <class T>

class KYVector{
private:
    int cap ;
    int size ;
    T* vec;
public:
    // constructors
    KYVector(int n = 10);
    KYVector (T*, int);
    KYVector (const KYVector&);

    // destructor
    ~KYVector();

};
