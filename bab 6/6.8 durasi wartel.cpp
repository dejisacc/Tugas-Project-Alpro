#include <iostream>
using namespace std;

struct Jam {
    int hh, mm, ss;
};

int konversiKeDetik(Jam waktu) {
    return (waktu.hh * 3600) + (waktu.mm * 60) + waktu.ss; //waktu ke tot detik
}

Jam konversiKeJam(int totalDetik) { //tot detik ke jam menit detik
    Jam hasil;
    hasil.hh = totalDetik / 3600;
    totalDetik %= 3600;
    hasil.mm = totalDetik / 60;
    hasil.ss = totalDetik % 60;
    return hasil;
}

int main() {
    const int BiayaPerDetik = 5; // biaya perdetik
    Jam J1, J2, J3;
    int totalDetik1, totalDetik2, durasi;
    char titikDua;
    double biaya;

    cout << "Masukkan waktu awal percakapan (hh:mm:ss): ";
    cin >> J1.hh >> titikDua >> J1.mm >> titikDua >> J1.ss;
    cout << "Masukkan waktu akhir percakapan (hh:mm:ss): ";
    cin >> J2.hh >> titikDua >> J2.mm >> titikDua >> J2.ss;

    totalDetik1 = konversiKeDetik(J1); //konv tot detik
    totalDetik2 = konversiKeDetik(J2);
    durasi = totalDetik2 - totalDetik1;
    biaya = durasi * BiayaPerDetik;
    J3 = konversiKeJam(durasi); //konv jam menit detik

    cout << "Durasi: " << durasi << " detik\n";
    cout << "Durasi dalam jam-menit-detik: " << J3.hh << ":" << J3.mm << ":" << J3.ss << endl;
    cout << "Biaya percakapan: Rp" << biaya << endl;

    return 0;
}