#include <iostream>
using namespace std;

struct Mahasiswa {
    int NIM;
    string NamaMhs;
    float IPK;
};

void BacaData(Mahasiswa Mhs[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data mahasiswa ke-" << i + 1 << endl;
        cout << "NIM: ";
        cin >> Mhs[i].NIM;
        cout << "Nama: ";
        cin.ignore(); // utk mengabaikan newline dari cin sebelumnya
        getline(cin, Mhs[i].NamaMhs);
        cout << "IPK: ";
        cin >> Mhs[i].IPK;
    }
}

void TampilData(Mahasiswa Mhs[], int n) {
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". NIM: " << Mhs[i].NIM
             << ", Nama: " << Mhs[i].NamaMhs
             << ", IPK: " << Mhs[i].IPK << endl;
    }
}

int main() {
    const int Nmaks = 100;
    Mahasiswa Mhs[Nmaks];
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    BacaData(Mhs, n);
    TampilData(Mhs, n);

    return 0;
}
