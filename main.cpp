#include "KY_Vector.h"
#include "KY_Vector.cpp"
#define align cout<<"\n======================================================\n";

int main() {
    // test cases .....
    int arr[5] = {1,2,3,4,5};
    KYVector<int>k(arr, 5); // initialize from array
    KYVector<int>k1(k); // copy constructor
    KYVector<int>vec ;
    vec = KYVector<int>(arr,5); // move assignment
    align
    cout << "before erase : " << k << endl ;
    k.erase(k.begin(), k.begin() +2 );
    cout << "after erase : " << k << endl;
    cout << "vector 2 elements " << k1  << endl ;
    align
    // ================= test boolean operators =================
    cout << "k == k1"<<( k == k1 ) << endl; // ==
    cout << "k > k1 " <<(k > k1 ) << endl; // >
    cout << "k < k1  " << (k < k1 ) << endl; //  <
    // ======================================================
    cout << "vector size" <<  k.Size() << endl;
    cout << "capacity before resize " << k.capacity() << endl;
    k.resize();
    cout << "capacity after resize " << k.capacity() << endl;
    align
    k.clear();
    cout << "empty function after clear : " <<  k.empty() << endl ;
    cout << k << endl ;


}
