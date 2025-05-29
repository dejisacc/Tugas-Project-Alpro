#include <iostream>
using namespace std;

int main() {
    int hh, mm, ss, p, totalDetik, sisaDetik;
    cout << "Masukkan jam (hh:mm:ss) : ";
    char titiDua; 
    cin >> hh >> titiDua >> mm >> titiDua >> ss;

    cout << "Masukkan jumlah menit yang ingin ditambahkan: ";
    cin >> p;

    totalDetik = hh * 3600 + mm * 60 + ss + (p * 60); //konv tot mnit & p mnit
    hh = totalDetik / 3600;
    sisaDetik = totalDetik % 3600;
    mm = sisaDetik / 60;
    ss = sisaDetik % 60;

    cout << "Jam setelah ditambah " << p << " menit: " << hh << ":" << mm << ":" << ss << endl;

    return 0;
}