#include <iostream>
using namespace std;

//buatlah algoritma yang membaca nama dan jumlah jam kerja karyawan selama seminggu lalu hitung
//gaji mingguannya berdasarkan golongan karyawan
int main(){
    const int JamNormal = 48; //perminggu
    const int UpahLembur = 3000; //perjam

    string nama;
    char gol;
    int jjk; //jumlah jam kerja
    double lbr; //lembur
    int UpahPerJam;
    double UpahTotal;
    
    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan golongan: ";
    cin >> gol;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jjk;

    switch (gol){
        case 'A': 
            UpahPerJam = 4000; break;
        case 'B':
            UpahPerJam = 5000; break;
        case 'C':
            UpahPerJam = 6000; break;
        case 'D':
            UpahPerJam = 7500; break;
    }

    if (jjk<=JamNormal){
        UpahTotal = jjk*UpahPerJam;
    }else{
        lbr = jjk-JamNormal;
        UpahTotal = JamNormal*UpahPerJam+lbr*UpahLembur;
    }
    cout << "Upah yang " << nama << " dapatkan sebesar " << UpahTotal << " rupiah";
}