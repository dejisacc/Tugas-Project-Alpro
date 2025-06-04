#include <iostream>
using namespace std;

int main(){
    int n, i, sum=0;
    cout << "Masukkan jumlah angka yang akan ditambahkan: ";
    cin >> n;

    for (i=1; i<=n; i++){
        sum = sum+i;
    }
    cout << "Hasil penjumlahan dari angka 1 sampai " << n << " adalah " << sum;

    return 0;
}