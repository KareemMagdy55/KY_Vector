#include "KY_Vector.h"
#include <iostream>
#define Temp template<class T>

using namespace std;

Temp
KYVector<T>::KYVector(int n) {
    cap = n ;
    size = 0;
    vec = new T[n];
}
Temp
KYVector<T>::KYVector(T * arr, int n ) {
    size = n ;
    cap =  n ;
    vec = new T[n];

    for (int i = 0; i < n; ++i) {
        vec[i] = arr[i];
    }
}
Temp
KYVector<T>::KYVector(const KYVector<T> &anotherVec) {
    size = anotherVec.size;
    cap = anotherVec.cap;

    vec = new T[cap];

    for (int i = 0; i < size; ++i) {
        vec[i] = anotherVec.vec[i];
    }
}
Temp
KYVector<T>::~KYVector() {
    size = 0;
    cap = 0 ;
    vec = nullptr;
}
Temp
KYVector<T> &KYVector<T>::operator=(const KYVector<T> & anotherVec) {
    size = anotherVec.size;
    cap = anotherVec.cap;

    vec = new T[cap];

    for (int i = 0; i < size; ++i) {
        vec[i] = anotherVec.vec[i];
    }
}
Temp
KYVector<T> &KYVector<T>::operator=(const KYVector<T> && anotherVec) {
    if ( this != &anotherVec) {
        size = anotherVec.size;
        cap = anotherVec.cap;
        vec = anotherVec.vec;

        anotherVec.size = 0 ;
        anotherVec.cap = 0 ;
        delete[] anotherVec.vec;
    }
    return *this ;
}
