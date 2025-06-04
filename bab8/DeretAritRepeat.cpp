#include <iostream>
using namespace std;

int main(){
    int n, i, sum;
    cout << "Masukkan jumlah angka yang akan ditambahkan: ";
    cin >> n;

    sum=0;
    do {
        sum = sum+i;
        i++;
    } while (i<=n);
    
    cout << "Hasil penjumlahan dari angka 1 sampai " << n << " adalah " << sum;

    return 0;
}