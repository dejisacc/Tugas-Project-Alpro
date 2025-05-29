#include <iostream>
using namespace std;

void inisialisasiLarik(int A[], int n){
    for (int i = 0; i <= n; i++){
        A[i] = 0;
    }
}

int main(){
    int n;
    cout << "Tentukan jumlah elemen yang akan digunakan: ";
    cin >> n;
    int A[100]; // asumsi ukuran maksimum array berisi 100 elemen
    inisialisasiLarik(A, n);
    cout << "Larik setelah inisialisasi: " << endl;
    for (int i = 1; i <= n; i++){
        cout << "A[" << i << "] = " << A[i] << endl;
    }
    return 0;
}