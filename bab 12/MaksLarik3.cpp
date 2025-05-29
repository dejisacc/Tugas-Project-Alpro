#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> A[i];
    }
}

int MaksLarik3 (int A[], int n){
    int i;
    int idxMaks = 0;
    for (i = 1; i < n; i++){
        if (A[i] > A[idxMaks]){
            idxMaks = i;
        }
    }
    return idxMaks;
}

int main(){
    int i, n, idxMaks;
    cout << "Masukkan berapa banyak data yang akan dimasukkan: ";
    cin >> n;
    int A[100]; //asumsi ukuran max larik
    BacaLarik1(A, n);

    cout << "Data yang dimasukkan: ";
    for (i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    idxMaks = MaksLarik3(A, n);
    cout << "Nilai maksimum: " << A[idxMaks] << endl;
    return 0;
}