#include "KY_Vector.h"
#include "KY_Vector.cpp"

int main() {
    // test cases ....
    int arr[5] = {1,2,3,4,5};
    KYVector<int>k(arr, 5);
    KYVector<int>k1(k);
    k.resize();
    cout << k[7];

}
