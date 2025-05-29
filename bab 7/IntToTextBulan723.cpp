#include <iostream>
using namespace std;

/*buatlah algoritma yang menerima msukan sebuah bilangan bulat yang nilainya terletak antara 1-12, lalu
mecetak tulisan angka dalam kata-kata (nama bulan) dengan switch-case*/
int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    switch(angka){
        case 1: 
            cout << "Januari"; break;
        case 2: 
            cout << "Februari";  break;
        case 3: 
            cout << "Maret"; break;
        case 4: 
            cout << "April"; break;
        case 5:
            cout << "Mei"; break;
        case 6:
            cout << "Juni"; break;
        case 7:
            cout << "Juli"; break;
        case 8:
            cout << "Agustus"; break;
        case 9:
            cout << "September"; break;
        case 10:
            cout << "Oktober"; break;
        case 11:
            cout << "November"; break;
        case 12:
            cout << "Desember"; break;
        default: 
            cout << "Bukan bulan yang benar"; 
    }
}