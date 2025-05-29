#include <iostream>
using namespace std;

float n; //banyak data
float u; //rata-rata data
void HitungRataRata(float n, float *u){
    int x; //data bil. bulat ang dibaca dari papan ketik
    int k; //pencacah pengulangan 
    int jumlah; //hsil penjumlahan data

    for (k=1; k<=n; k++){
        cout << "Masukkan nilai ke-" << k << ": ";
        cin >> x;
        jumlah += x;
    }
    *u = jumlah/n;
}

int main(){
    cout << "Masukkan banyaknya data: ";
    cin >> n;
    HitungRataRata(n,&u);
    cout << "Rata-rata dari " << n << " buah nilai adalah " << u << endl;
} 