#include <iostream>
using namespace std;

void HitungRataRata(int &n, float *u){
    int x; //data bil. bulat ang dibaca dari papan ketik
    int i=1; //pencacah pengulangan 
    int jumlah=0; //hsil penjumlahan data
    n=0;
    while (true){
        cout << "Masukkan nilai ke-" << n+1 << ": ";
        cin >> x;

        if (x == 9999){
            break;
        }

        n++;
        jumlah += x;
    }
    *u = jumlah/n;
}

int main(){
    int n; //banyak data
    float u; //rata-rata data
    HitungRataRata(n,&u);
    cout << "Rata-rata dari " << n << " buah nilai adalah " << u << endl;
} 