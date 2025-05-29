#include <iostream>
#include <thread> //utk delay
#include <chrono> //utk durasi
using namespace std;

void tampilkanJam() {
    int detik = 0, menit = 0, jam = 0;
    int hari = 14, bulan = 4, tahun = 2025;
    int hariKe = 1; // 1 = Senin

    while (true) {
        //waktu
        cout << "Waktu: ";
        if (jam < 10){
            cout << "0";
            cout << jam << ":";
        }
        if (menit < 10){
            cout << "0";
            cout << menit << ":";
        }
        if (detik < 10){
            cout << "0";
            cout << detik;
        }

        cout << " Tanggal: ";
        if (hari < 10){
            cout << "0";
            cout << hari << "-";
        }
        if (bulan < 10){
            cout << "0";
            cout << bulan << "-" << tahun;
        } 

        //hari
        cout << " Hari: ";
        if (hariKe == 1)cout << "Senin";
        else if (hariKe == 2) cout << "Selasa";
        else if (hariKe == 3) cout << "Rabu";
        else if (hariKe == 4) cout << "Kamis";
        else if (hariKe == 5) cout << "Jumat";
        else if (hariKe == 6) cout << "Sabtu";
        else cout << "Minggu";

        cout << endl;

        //delay 1 dtik
        this_thread::sleep_for(chrono::seconds(1));
        detik++;

        //perubahan waktu
        if (detik == 60) {
            detik = 0;
            menit++;
        }
        if (menit == 60) {
            menit = 0;
            jam++;
        }
        if (jam == 24) {
            jam = 0;
            hari++;
            hariKe++;
            if (hariKe > 7) hariKe = 1;

            //asumsi semua bulan punya 30 hari
            if (hari > 30) {
                hari = 1;
                bulan++;
                if (bulan > 12) {
                    bulan = 1;
                    tahun++;
                }
            }
        }
    }
}

int main() {
    tampilkanJam();
    return 0;
}
