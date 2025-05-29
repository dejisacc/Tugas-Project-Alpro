#include <iostream>
using namespace std;

struct Jam {
    int hh;
    int mm;
    int ss;
};

void hitungWaktu(Jam J, int p) {
    int totalDetik = (J.hh * 3600) + (J.mm * 60) + J.ss - (p * 60);
    J.hh = (totalDetik / 3600) % 24; // Menggunakan % 24 untuk memastikan jam dalam 24 jam
    J.mm = (totalDetik % 3600) / 60;
    J.ss = totalDetik % 60;

    cout << "Waktu setelah mengurangi " << p << " menit: "
         << (J.hh < 10 ? "0" : "") << J.hh << ":"
         << (J.mm < 10 ? "0" : "") << J.mm << ":"
         << (J.ss < 10 ? "0" : "") << J.ss << endl;
}

int main() {
    Jam J;
    int p;

    cout << "Masukkan waktu (hh:mm:ss): ";
    scanf("%d:%d:%d", &J.hh, &J.mm, &J.ss);
    cout << "Masukkan jumlah menit untuk dikurangi (p): ";
    cin >> p;

    hitungWaktu(J, p);

    return 0;
}