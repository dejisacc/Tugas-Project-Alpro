#include <iostream>
using namespace std;

main(){
    char cc;
    int ncc=0;
    cout << "Masukkan karakter pertama: ";
    cin >> cc;
    
    while (cc != '.') {
        ncc++;
        cout << "Masukkan karakter selanjutnya: ";
        cin >> cc;
    }

    cout << "Jumlah karakter sebelum titik: " << ncc << endl;
    return 0; 
}