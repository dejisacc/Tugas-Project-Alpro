#include <iostream>
#include <cmath>
using namespace std;

/*buatlah algoritma yang memungkinkan pengguna dapat memilih utk menentukan luas 4 persegi pamjanag,
keliling, serta panjang diagonalnya*/
main(){
    int nomor;
    cout << 
    "     MENU:\n" <<
    "1. Hitung Luas\n"<<
    "2. Hitung Keliling\n"<<
    "3. Hitung Panjang Diagonal\n"<<
    "4. Keluar Program\n";
    cout << "Masukkan pilihan anda (1/2/3/4): ";
    cin >> nomor;

    double pjg, lbr, luas, keliling, diagonal;
    switch (nomor){
    case 1:
        cout << "Masukkan panjang (cm): "; cin >> pjg;
        cout << "Masukkan lebar (cm): "; cin >> lbr;
        luas = pjg*lbr;
        cout << "Luas persegi panjang adalah " << luas << "cm^2";
        break;
    case 2:
        cout << "Masukkan panjang (cm): "; cin >> pjg;
        cout << "Masukkan lebar (cm): "; cin >> lbr;
        keliling = 2*pjg+2*lbr;
        cout << "Keliling persegi panjang adalah " << keliling << "cm";
        break;
    case 3:
        cout << "Masukkan panjang (cm): "; cin >> pjg;
        cout << "Masukkan lebar (cm): "; cin >> lbr;
        diagonal = hypot(pjg,lbr);
        cout << "Panjang diagonal persegi panjang adalah " << diagonal << "cm";
        break;
    case 4:
        cout << "Keluar dari program";
        return 0;
    default:
        cout << "Pilihan tifak valid";
    }
    return 0;
}