#include <iostream>
using namespace std;


void cari2Min(int A[], int n){
    int i = 0;
    int idxMin1 = 0;
    for (i = 0; i < n; i++){
        if (A[i] < A[idxMin1]){
            idxMin1 = i;
        }
    }
    cout << "Elemen terkecil pertama: " << A[idxMin1] << endl;


    int idxMin2 = 0;
    for (i = 0; i < n; i++){
        if (A[i] < A[idxMin2] && i != idxMin1){
            idxMin2 = i;
        }
    }
    cout << "Elemen terkecil kedua: " << A[idxMin2] << endl;
}


int main(){
    int A[5] = {17, 5, 0, 88, 11};
    cari2Min(A, 5);
   
}
