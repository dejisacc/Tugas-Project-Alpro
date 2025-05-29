#include <iostream>
using namespace std;

void BacaLarik1(int A[], int n){
    int i;
    for (i = 1; i <= n; i++){
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> A[i];
    }
}

void CetakLarik (int A[], int &n){
    int i;
    for (i = 1; i <= n; i++){
        cout <<A[i] << " ";
    }
}

void HitungRataRata (int A[], int &n){
    int i=1;
    float jumlah=0;
    for (i = 1; i <= n; i++){
        jumlah += A[i];
    }
    float u = jumlah/n;
    cout << "Rata-rata: " << u << endl;
}

int main(){
    int max = 100;
    int A[max];
    int n;
    cout << "Masukkan banyak data yang akan dimasukkan: ";
    cin >> n;
    BacaLarik1(A, n);
    cout << "Data yang dimasukkan: ";
    CetakLarik(A, n);
    cout << endl;
    HitungRataRata(A, n);

}