#include <iostream>
using namespace std;

main (){
    string nama;
    float gaji_pokok;  
    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan gaji pokok karyawan: ";
    cin >> gaji_pokok;
    
    float tunjangan = gaji_pokok*0.20;
    float gaji_bonus = gaji_pokok+tunjangan;
    float pajak = 0.15*gaji_bonus;
    float gaji_bersih = (gaji_pokok + tunjangan - pajak);
    cout << "Gaji bersih " << nama << " adalah " << gaji_bersih << " rupiah";
}