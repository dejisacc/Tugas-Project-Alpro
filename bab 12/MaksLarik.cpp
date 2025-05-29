#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 1; i <= n; i++){
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> A[i];
    }
}

int MaksLarik (int A[], int &n){
    int i;
    int maks;

    maks = -9999;
    for (i=1; i <= n; i++){
        if (A[i] > maks){
            maks = A[i];
        }
    }
    return maks;
}

int main(){
    int n, i;
    cout << "Masukkan berapa banyak data yang akan dimasukkan: ";
    cin >> n;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    BacaLarik1(A, n);
    
    cout << "Data: ";
    for (i = 1; i <= n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Nilai maksimum: " << MaksLarik(A, n) << endl;
}