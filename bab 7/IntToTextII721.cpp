#include <iostream>
using namespace std;

/*buatlah algoritma yang menerima msukan sebuah bilangan bulat yang nilainya terletak antara 1-4, lalu
mecetak tulisan angka dalam kata-kata dengan if-then-else*/
int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    switch(angka){
        case 1: 
            cout << "satu"; break;
        case 2: 
            cout << "dua";  break;
        case 3: 
            cout << "tiga"; break;
        case 4: 
            cout << "empat"; break;
        default: 
            cout << "angka harus 1-4"; 
    }
}