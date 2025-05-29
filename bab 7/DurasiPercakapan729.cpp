#include <iostream>
using namespace std;

struct Jam {
    int hh, mm, ss;
};

int main() {
    Jam J1, J2, J3;
    char titikDua;
    int KodeWil;
    int durasi;
    double PulsWil, TarifWil, biaya;

    cout << "Masukkan waktu pertama (hh:mm:ss): ";
    cin >> J1.hh >> titikDua >> J1.mm >> titikDua >> J1.ss;
    cout << "Masukkan waktu kedua (hh:mm:ss): ";
    cin >> J2.hh >> titikDua >> J2.mm >> titikDua >> J2.ss;
    cout << "Masukkan kode wilayah: ";
    cin >> KodeWil;

    //pengurangan detik
    if (J2.ss >= J1.ss) {
        J3.ss = J2.ss - J1.ss;
    } else {
        J3.ss = (J2.ss + 60) - J1.ss; // pinjam dari menit
        J2.mm--; //berkurang krn dipinjam
    }

    //menit
    if (J2.mm >= J1.mm) {
        J3.mm = J2.mm - J1.mm;
    } else {
        J3.mm = (J2.mm + 60) - J1.mm; //pinjam dari jam
        J2.hh--; //berkurang krn dipinjam
    }

    //jam
    if (J2.hh >= J1.hh) {
        J3.hh = J2.hh - J1.hh;
    } else {
        J3.hh = (J2.hh + 24) - J1.hh;
    }

    durasi = (J3.hh*3600)+(J3.mm*60)+J3.ss;

    switch (KodeWil){
        case 21:
            PulsWil = 60;
            TarifWil = 150;
            break;
        case 751:
            PulsWil = 30;
            TarifWil = 250;
            break;
        case 737:
            PulsWil = 25;
            TarifWil = 375;
            break;
        case 912:
            PulsWil = 20;
            TarifWil = 415;
            break;
        case 981:
            PulsWil = 17;
            TarifWil = 510;
            break;
        default:
            cout << "Kode wilayah tidak ditemukan!" << endl;
            return 1;
    }

    int pulsa = durasi/PulsWil;
    biaya = pulsa*TarifWil;
    cout << "Durasi menelepon: " << durasi << endl;
    cout << "Biaya menelepon: " << biaya << endl;
    return 0;
}

