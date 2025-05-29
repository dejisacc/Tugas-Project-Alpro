#include <iostream>
using namespace std;

int main(){
    int nomorMenu;
    bool stop = false;

    while (!stop) {
        cout << "1. Baca data\n";
        cout << "2. Cetak data\n";
        cout << "3. Ubah data\n";
        cout << "4. Hapus data\n";
        cout << "5. Keluar program\n";
        cout << "Masukkan pilihan anda 1/2/3/4/5: ";
        cin >> nomorMenu;

        switch (nomorMenu)
        {
        case 1:
            cout << "Anda memilih menu nomor 1\n"; break;
        case 2:
            cout << "Anda memilih menu nomor 2\n"; break;
        case 3:
            cout << "Anda memilih menu nomor 3\n"; break;
        case 4:
            cout << "Anda memilih menu nomor 4\n"; break;
        case 5:
            cout << "Keluar program\n"; break;
            stop = true;
        default:
            cout << "Nomor pilihan anda salah";
            break;
        }
    }

    return 0;
}