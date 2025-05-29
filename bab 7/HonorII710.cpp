#include <iostream>
using namespace std;

//tentukan honor karyawan dgn kemungkinan jam lembur ver 2
int main(){
    const int JamNormal = 48; 
    const int UpahPerJam = 2000;
    const int UpahLembur = 3000;

    string nama;
    int jjk, lbr; //jumlah jam kerja & lembur
    float upah;
    
    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jjk;

    if (jjk <= JamNormal){
        upah = jjk*UpahPerJam;
    }else{
        lbr = jjk-JamNormal;
        upah = JamNormal*UpahPerJam+lbr*UpahLembur;
    }

    cout << "upah yang " << nama << " dapatkan sebesar " << upah << " rupiah";
}