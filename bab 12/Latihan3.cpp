#include <iostream>
using namespace std;

void cari2Maks(int A[], int n){
    int i = 0;
    int idxMaks1 = 0;
    for (i = 0; i < n; i++){
        if (A[i] > A[idxMaks1]){
            idxMaks1 = i;
        }
    } 
    cout << "Elemen terbesar pertama: " << A[idxMaks1] << endl;

    int idxMaks2 = 0;
    for (i = 0; i < n; i++){
        if (A[i] > A[idxMaks2] && i != idxMaks1){
            idxMaks2 = i;
        }
    }
    cout << "Elemen terbesar kedua: " << A[idxMaks2] << endl;
}

int main(){
    int A[5] = {17, 5, 0, 88, 11};
    cari2Maks(A, 5);
    return 0;
}