#include <iostream>
using namespace std;

struct Jam {
    int hh, mm, ss;
};

int main() {
    Jam J1, J2, J3;
    char titikDua;
    cout << "Masukkan waktu pertama (hh:mm:ss): ";
    cin >> J1.hh >> titikDua >> J1.mm >> titikDua >> J1.ss;
    cout << "Masukkan waktu kedua (hh:mm:ss): ";
    cin >> J2.hh >> titikDua >> J2.mm >> titikDua >> J2.ss;

    //detik
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

    cout << "Selisih waktu: " 
         << (J3.hh < 10 ? "0" : "") << J3.hh << ":"
         << (J3.mm < 10 ? "0" : "") << J3.mm << ":"
         << (J3.ss < 10 ? "0" : "") << J3.ss << endl;

    return 0;
}
