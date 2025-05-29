#include <iostream>
using namespace std;
 int main(){
    double jumlah; //jumlah deret
    int n; //penyebut pada suku terakhir, n>0
    int tanda; //pembeda suku negatif & positif
    double k; //penyebut suku ke-i
    cout << "Masukkan penyebut suku terakhir: ";
    cin >> n;

    jumlah = 0;
    tanda = +1;
    k = 1;
    while (k <= n){
        jumlah = jumlah + (tanda * 1/k);
        k += 2;
        tanda = -tanda;       
    }
     
    cout << "Jumlah deret pecahan adalah " << jumlah;
}