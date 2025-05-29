#include <iostream>
using namespace std;

int cariSelisih (int A[], int n){
    int i = 0;
    int idxMaks = 0;
    for (i = 0; i < n; i++){
        if (A[i] > A[idxMaks]){
            idxMaks = i;
        }
    }
    int selisih = A[idxMaks] - A[0];
    return selisih;
}

int main (){
    int A[5] = {3, 5, 7, 9, 11};
    cout << "Selisih elemen terbesar dengan elemen terkecil: " << cariSelisih(A, 5) << endl;

    return 0;
}