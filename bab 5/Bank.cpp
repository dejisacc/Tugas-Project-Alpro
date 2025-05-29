#include <iostream>
using namespace std;

int main(){
    float saldo, saldo1thn;
    float p = 0.05;//bunga 5% per tahun
    cout << "Masukkan saldo tabungan: ";
    cin >> saldo;

    saldo1thn = saldo*p + saldo;
    cout << "Saldo tabungan setelah 1 tahun: " << saldo1thn;
    return 0;
}