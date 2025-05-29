#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int NIM;
    double IPK;
};

void cetakMahasiswaLulus(Mahasiswa A[], int n) {
    cout << "Mahasiswa dengan IPK > 2.0:" << endl;
    for (int i = 0; i < n; i++) {
        if (A[i].IPK > 2.0) {
            cout << "Nama: " << A[i].nama 
                 << ", NIM: " << A[i].NIM 
                 << ", IPK: " << A[i].IPK << endl;
        }
    }
}

void cariIPKTertinggiTerendah(Mahasiswa A[], int n) {
    if (n == 0) return;

    int idxMax = 0;
    int idxMin = 0;

    for (int i = 1; i < n; i++) {
        if (A[i].IPK > A[idxMax].IPK) {
            idxMax = i;
        }
        if (A[i].IPK < A[idxMin].IPK) {
            idxMin = i;
        }
    }

    cout << "Mahasiswa dengan IPK Tertinggi:" << endl;
    cout << "Nama: " << A[idxMax].nama 
         << ", NIM: " << A[idxMax].NIM 
         << ", IPK: " << A[idxMax].IPK << endl;

    cout << "Mahasiswa dengan IPK Terendah:" << endl;
    cout << "Nama: " << A[idxMin].nama 
         << ", NIM: " << A[idxMin].NIM 
         << ", IPK: " << A[idxMin].IPK << endl;
}

int main() {
    Mahasiswa data[] = {
        {"Andi", 12345, 3.2},
        {"Budi", 12346, 1.8},
        {"Citra", 12347, 3.9},
        {"Dina", 12348, 2.1}
    };

    int jumlah = sizeof(data) / sizeof(data[0]);

    cetakMahasiswaLulus(data, jumlah);
    cout << endl;
    cariIPKTertinggiTerendah(data, jumlah);

    return 0;
}
