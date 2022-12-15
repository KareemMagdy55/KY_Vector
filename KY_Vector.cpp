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
Temp
T &KYVector<T>::operator[](int n ) {
    try {
        if (n >= size or n < 0) {
            throw 0;
        } else {
            return vec[n];
        }
    }
    catch(int& x) {
        cout << "INDEX NOT FOUND!\nERROR NO."  ;
        return x;
    }
}
Temp

T KYVector<T>::pop_back() {
    T lastElement = vec[size-1];
    vec[size-1] = NULL;
    size--;
    cap--;
    return lastElement;
}
Temp
int KYVector<T>::push_back(T n) {
    if ( size + 1 > cap){
        cap ++ ;
    }
    size ++ ;
    vec[size - 1] = n;
    return size;
}
Temp
void KYVector<T>::erase(iterator it) {
    try {
        KYVector<T> other;
        for (int i = 0; i < size; ++i) {
            if (&vec[i] != it) {
                other.push_back(vec[i]);
            }
        }
        if (size == other.size)
            throw 1;
        vec = other.vec;
        other.vec = nullptr;
    }
    catch (int & x ){
        cout << "ITERATOR NOT FOUND!\nERROR NO." << x << endl ;
    }
}
Temp
void KYVector<T>::erase(KYVector::iterator it1, KYVector::iterator it2) {
    try {
        KYVector<T> other;
        bool flag = true;
        if (it1 > it2 || it1 < this->begin() || it2 > this->end())
            throw 2;
        for (int i = 0; i < size; ++i) {
            if ( &vec[i] == it1) flag = false;
            if (flag) {
                other.push_back(vec[i]);
                cout << vec[i] <<endl;
            }
            if ( &vec[i] == it2) flag = true;
        }
        vec = other.vec;
        other.vec = nullptr;
    }
    catch (int & x ){
        cout << "NOT VALID INTERVAL!\nERROR NO." << x << endl ;
    }
}
Temp
void KYVector<T>::clear() {
    size = 0 ;
    cap = 0 ;
    vec = new T[cap];
}
Temp
void KYVector<T>::insert(KYVector::iterator it , T n) {
    try {
        KYVector<T> other(size + 1);
        bool flag = false ;
        if (it < this->begin() || it > this->end())
            throw 3;

        for (int i = 0; i < size ; ++i) {
            if ( it == &vec[i] && !flag) {
                other.push_back(n);
                --i;
                flag = true;
                continue;
            }
                other.push_back(vec[i]);
        }
        vec = other.vec;
        other.vec = nullptr;
    }
    catch (int & x ){
       cout << "ITERATOR NOT FOUND!\nERROR NO." << x << endl;
    }
}
Temp
bool KYVector<T>::operator==(const KYVector<T> & kyVector) {
    if (size != kyVector.size)
        return false;

    else {
        for (int i = 0; i < size; ++i) {
            if (vec[i] != kyVector.vec[i])
                return false;
        }
        return true;

    }
}
Temp
bool KYVector<T>::operator>(const KYVector<T> & kyVector) {
    if (*this == kyVector)
        return false;

    if (size != kyVector.size)
        return false;

    else {
        for (int i = 0; i < size; ++i) {
            if (vec[i] < kyVector.vec[i])
                return false;
        }
        return true;

    }
}
Temp
bool KYVector<T>::operator<(const KYVector<T> & kyVector) {
    if ( *this == kyVector)
        return false;

    if ( size != kyVector.size)
        return false;

    else {
        for (int i = 0; i < size; ++i) {
            if (vec[i] > kyVector.vec[i])
                return false;
        }
        return true;

    }
}
Temp
void KYVector<T>::resize() {
    cap *= 2;
    for (int i = size; i <= cap; ++i) {
        vec[i] = 0 ;
    }
    size *= 2;
}
Temp
bool KYVector<T>::empty() {
    return !size;
}
Temp
int KYVector<T>::Size() const {
    return size;
}
Temp
int KYVector<T>::capacity() const {
    return cap;
}
