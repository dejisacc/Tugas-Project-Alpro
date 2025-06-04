#include <iostream>
using namespace std;

int main(){
    int jamNormal = 48;
    int upahLembur = 3000;
    string nama;
    char gol; //golongan
    int jjk; //jumlah jam kerja
    double lembur;
    int upahPerJam;
    double upahTotal;
    char jwb; //konfirmasi y/t

    do {
        cout << "Masukkan nama: "; cin >> nama;
        cout << "Masukkan golongan: "; cin >> gol;
        cout << "Masukkan jumlah jam kerja: "; cin >> jjk;

        switch (gol){
        case 'A':
            upahPerJam = 4000;
            break;
        case 'B':
            upahPerJam = 5000;
            break;
        case 'C':
            upahPerJam = 6000;
            break;
        case 'D': 
            upahPerJam = 7500;
            break;
        }

        if (jjk <= jamNormal){
            upahTotal = jjk*upahPerJam;
        }else{
            lembur = jjk-jamNormal;
            upahTotal = jamNormal*upahPerJam + lembur*upahLembur;
        }
        
        cout << "Total upah yang didapatkan adalah " << upahTotal << endl;
        cout << "Ulangi untuk karyawan lain? (y/t)\n";
        cin >> jwb;
    }while (jwb == 'y');

    return 0;
}