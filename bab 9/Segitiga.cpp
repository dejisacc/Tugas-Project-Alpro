#include <iostream>
using namespace std;

void HitungLuas(){
    double alas, tinggi; //dalam cm
    double L; //dalam cm
    cout << "Masukkan alas (cm): ";
    cin >> alas;
    cout << "Masukkan tinggi (cm): ";
    cin >> tinggi;
    
    L = alas*tinggi/2.0;
    cout << "Luas segitiga dengan alas " << alas << " cm dan tinggi " << tinggi << " adalah " << L << " cm^2";
}

main(){
    cout << "Mulai menghitung luas segitiga..\n";
    HitungLuas();
    cout << "\nProgram selesai";
}