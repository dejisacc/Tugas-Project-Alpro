#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> A[i];
    }
}

int CariMaks2 (int A[], int &n){
    int i, maks;
    maks = A[0];
    for (i = 1; i < n; i++){
        if (A[i] > maks){
            maks = A[i];
        }
    } 
    return maks;
}

int main(){
    int i, n, maks;
    cout << "Masukkan berapa banyak data yang akan dimaasukkan: ";
    cin >> n; 

    int A[100]; //asumsi ukuran maksimum larik 100
    BacaLarik1(A, n);
    

    cout << "Data yang dimasukkan: ";
    for (i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Nilai maksimum: " << CariMaks2(A, n) << endl;

}