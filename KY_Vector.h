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

    // copy assignment and move assignment
    KYVector &operator=(const KYVector&);  // Copy assignment
    KYVector &operator=(const KYVector&&); // Move assignment


};
