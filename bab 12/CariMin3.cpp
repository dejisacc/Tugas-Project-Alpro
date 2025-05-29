#include <iostream>
using namespace std;

void cariMin3(int A[], int n, int &idxMin){
    int i;
    idxMin = 0;
    for (i = 1; i < n; i++){
        if (A[i] < A[idxMin]){
            idxMin = i;
        }
    }
}

int main(){
    int A[] = {5, 2, 8, 1, 4};
    int n = sizeof(A) / sizeof(A[0]);
    int idxMin;
    cariMin3(A, n, idxMin);
    cout << "Elemen terkecil terdapat pada indeks ke-" << idxMin << endl;
    cout << "Nilai elemen terkecil: " << A[idxMin] << endl;
}