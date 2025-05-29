#include <iostream>
using namespace std;

struct Tanggal {
    int dd, mm, yy;
} T;


bool Kabisat() {
    return (T.yy % 4 == 0 && T.yy % 100 != 0) || (T.yy % 400 == 0);
}

int jumlahHari() {
    switch (T.mm) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return Kabisat() ? 29 : 28;
        default:
            return 0;
    }
}

void tanggalBerikutnya() {
    int hariDalamBulan = jumlahHari();
    if (T.dd < hariDalamBulan) {
        T.dd++;  
    } else {
        T.dd = 1;  // Reset ke hari pertama bulan berikutnya
        if (T.mm == 12) {  // Jika Desember, naik ke tahun berikutnya
            T.mm = 1;
            T.yy++;
        } else {
            T.mm++;
        }
    }
}

int main() {
    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> T.dd >> T.mm >> T.yy;

    tanggalBerikutnya();

    cout << "Tanggal berikutnya adalah: " << T.dd << "-" << T.mm << "-" << T.yy << endl;

    return 0;
}