#include <iostream>
#include <cmath>
using namespace std;

int nomorMenu;
void HitungPersegiPanjang(int nomorMenu){
    double p; //panjang
    double l; //lebar 
    double luas, keliling, diagonal;

    switch (nomorMenu){
    case 1:
        cout << "Masukkan panjang (cm): ";
        cin >> p;
        cout << "Masukkan lebar (cm): ";
        cin >> l;

        luas = p*l;
        cout << "Luas persegi panjang: " << luas << " cm^2\n";
        break;
    case 2:
        cout << "Masukkan panjang (cm): ";
        cin >> p;
        cout << "Masukkan lebar (cm): ";
        cin >> l;

        keliling = 2*p + 2*l;
        cout << "Keliling persegi panjang: " << keliling << " cm\n";
        break;   
    case 3:
        cout << "Masukkan panjang (cm): ";
        cin >> p;
        cout << "Masukkan lebar (cm): ";
        cin >> l;

        diagonal = sqrt((p*p) + (l*l));
        cout << "Panjang diagonal persegi panjang: " << diagonal << " cm\n";
        break;   
    case 4: 
        cout << "Anda telah keluar dari program";
        break;  
    } 
}

int main(){
    cout << "MENU EMPAT PERSEGI PANJANG:\n";
    cout << "1. Hitung luas\n";
    cout << "2. Hitung keliling\n";
    cout << "3. Hitung panjang diagonal\n";
    cout << "4. Keluar dari program\n";
    cout << "Ketikan pilihan anda (1/2/3/4): ";
    cin >> nomorMenu;
    HitungPersegiPanjang(nomorMenu);
    
} 