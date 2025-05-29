#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> A[i];
    }
}

void CariMaks3(int A[], int n, int &idxMaks){
    int i;
    idxMaks = 0;// smeentara
    for (i = 1; i < n; i++){
        if (A[i] > A[idxMaks]){
            i = idxMaks;
        }
    }
}

int main(){
    int n, i, idxMaks;
    cout << "Masukkan berapa banyak data yang akan dimasukkan: ";
    cin >> n;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    BacaLarik1(A, n);
    
    cout << "Data yang dimasukkan: ";
    for (i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    CariMaks3(A, n, idxMaks);
    cout << "Nilai maksimum: " << A[idxMaks] << endl;
}