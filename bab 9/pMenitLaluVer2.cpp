#include <iostream>
using namespace std;

void AnalisisKasus(int jam, int menit, int detik, int p) {
    menit -= p;
    while (menit < 0) {
        menit += 60; 
        jam--; 
        if (jam < 0) {
            jam += 24; //jika jam kurang dari 0, reset ke 24 jam
        }
    }

    cout << "Waktu setelah mengurangi " << p << " menit: "
         << (jam < 10 ? "0" : "") << jam << ":"
         << (menit < 10 ? "0" : "") << menit << ":"
         << (detik < 10 ? "0" : "") << detik << endl;
}

int main() {
    int jam, menit, detik, p;
    cout << "Masukkan waktu (hh:mm:ss): ";
    scanf("%d:%d:%d", &jam, &menit, &detik);
    cout << "Masukkan jumlah menit untuk dikurangi (p): ";
    cin >> p;

    AnalisisKasus(jam, menit, detik, p);

    return 0;
}