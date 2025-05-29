#include <iostream>
using namespace std;

int main() {
    int hh, mm, ss, totalDetik, sisaDetik;
    cout << "Masukkan jam (hh:mm:ss) : ";
    char titiDua; 
    cin >> hh >> titiDua >> mm >> titiDua >> ss;

    totalDetik = hh*3600 + mm*60 + ss;
    totalDetik += 1;

    hh = totalDetik/3600;
    sisaDetik = totalDetik%3600;
    mm = sisaDetik/60;
    ss = sisaDetik%60;

    cout << "Jam setelah ditambah 1 detik: " << hh << ":" << mm << ":" << ss << endl;

}