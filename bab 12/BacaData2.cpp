#include <iostream>
using namespace std;

const int Nmaks = 100;

struct MataKuliah {
    string KodeMK;
    string NamaMK;
    char Nilai; // A/B/C/D/E
};

struct Mahasiswa {
    int NIM;
    string NamaMhs;
    MataKuliah MK[4]; // 4 mata kuliah
};

Mahasiswa Mhs2[Nmaks];
void BacaData2(int N) {
    for (int i = 0; i < N; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM     : ";
        cin >> Mhs2[i].NIM;
        cin.ignore(); // untuk mengabaikan newline setelah input NIM
        cout << "Nama    : ";
        getline(cin, Mhs2[i].NamaMhs);
        
        for (int j = 0; j < 4; j++) {
            cout << "  Mata Kuliah ke-" << j + 1 << endl;
            cout << "    Kode MK   : ";
            cin >> Mhs2[i].MK[j].KodeMK;
            cin.ignore();
            cout << "    Nama MK   : ";
            getline(cin, Mhs2[i].MK[j].NamaMK);
            cout << "    Nilai     : ";
            cin >> Mhs2[i].MK[j].Nilai;
        }
    }
}

void TampilData(int N) {
    for (int i = 0; i < N; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "NIM  : " << Mhs2[i].NIM << endl;
        cout << "Nama : " << Mhs2[i].NamaMhs << endl;
        for (int j = 0; j < 4; j++) {
            cout << "  MK " << j + 1 << ": " << Mhs2[i].MK[j].KodeMK << " - "
                 << Mhs2[i].MK[j].NamaMK << ", Nilai: " << Mhs2[i].MK[j].Nilai << endl;
        }
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> N;

    BacaData2(N);
    TampilData(N);

    return 0;
}
