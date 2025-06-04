#include <iostream>
using namespace std;
 int main(){
    double jumlah; //jumlah deret
    int n; //penyebut pada suku terakhir, n>0
    int i; //suku ke-i
    double k; //penyebut suku ke-i
    cout << "Masukkan penyebut suku terakhir: ";
    cin >> n;

    jumlah = 0;
    i = 1;
    k = 1;
    while (k <= n){
        if (i % 2 == 1){
            jumlah = jumlah + 1/k;
        }else {
            jumlah = jumlah - 1/k;
        }

        i++;
        k += 2;
    }
     
    cout << "Jumlah deret pecahan adalah " << jumlah;
}