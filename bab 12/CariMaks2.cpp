#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> A[i];
    }
}

void CariMaks2(int A[], int n, int &maks){
    int i;
    maks = A[0]; // maks sementara
    for (i=0; i < n; i++){
        if (A[i] > maks){
            maks = A[i];
        }
    }
}

int main(){
    int n, i, maks;
    cout << "Masukkan berapa banyak data yang akan dimasukkan: ";
    cin >> n;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    BacaLarik1(A, n);
    
    cout << "Data yang dimasukkan: ";
    for (i = 1; i <= n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    CariMaks2(A, n, maks);
    cout << "Nilai maksimum: " << maks << endl;
}