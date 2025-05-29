#include <iostream>
using namespace std;

/*buatlah algoritma yang mencetak menu dan membaca nomor pilihan menu dengan switch-case*/
int main(){
    int nomor;
    cout << 
    "       MENU:\n" <<
    "1. Baca Data\n"<<
    "2. Cetak Data\n"<<
    "3. Ubah Data\n"<<
    "4. Hapus Data\n"<<
    "5. Keluar Program\n";
    cout << "Masukkan pilihan anda (1/2/3/4/5): ";
    cin >> nomor;

    switch(nomor){
        case 1: 
            cout << "Anda memilih menu nomor 1"; break;
        case 2: 
            cout << "Anda memilih menu nomor 2"; break;
        case 3: 
            cout << "Anda memilih menu nomor 3"; break;
        case 4: 
            cout << "Anda memilih menu nomor 4"; break;
        case 5:
            cout << "Anda memilih menu nomor 5"; break;
        default: 
            cout << "Nomor pilihan anda salah"; 
    }
}