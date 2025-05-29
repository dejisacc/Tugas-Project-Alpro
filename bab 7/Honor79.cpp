#include <iostream>
using namespace std;

//tentukan honor karyawan dgn kemungkinan jam lembur ver 1
int main(){
    string nama;
    int jjk, lbr; //jumlah jam kerja & lembur
    float upah;

    cout << "Masukkan nama karyawan: ";
    cin >> nama;
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jjk;

    if (jjk <= 48){
        upah = jjk*2000;
    }else{
        lbr = jjk-48;
        upah = 48*2000+lbr*3000;
    }

    cout << "upah yang " << nama << " dapatkan sebesar " << upah << " rupiah";
}