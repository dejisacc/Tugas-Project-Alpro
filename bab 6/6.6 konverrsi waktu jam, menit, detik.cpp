#include <iostream>
using namespace std;

struct Jam {
    int hh; // Jam
    int mm; // Menit
    int ss; // Detik
};

Jam konversiDetik(int totalDetik) {
    Jam hasil;
    hasil.hh = totalDetik / 3600;        
    int sisa = totalDetik % 3600;        
    hasil.mm = sisa / 60;                
    hasil.ss = sisa % 60;                
    return hasil;
}

int main() {
    int totalDetik;
    cout << "Masukkan jumlah detik: ";
    cin >> totalDetik;

    Jam waktu = konversiDetik(totalDetik);
    cout << "Hasil konversi: " << waktu.hh << " jam, " << waktu.mm << " menit, " << waktu.ss << " detik" << endl;

    return 0;
}