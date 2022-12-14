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

    // copy assignment and move assignment operators
    KYVector &operator=(const KYVector&);
    KYVector &operator=(const KYVector&&);

    // Access operations
    T& operator[](int);

    // Modifying operations
    T pop_back();
    int push_back(T);
    typedef T* iterator;
    void erase (iterator);
    void erase (iterator, iterator);
    void clear();
    void insert(iterator, T);

    //iterators
    iterator begin() { return &vec[0] ;}
    iterator end() { return &vec[size] ;}


    // Friends
    friend ostream& operator << (ostream& out, KYVector<T> kyVec) {
        for (int i = 0; i < kyVec.size; ++i)
            out << kyVec[i] << ' ';
        return out;
    }

};
