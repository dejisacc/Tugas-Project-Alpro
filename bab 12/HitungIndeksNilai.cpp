#include <iostream>
using namespace std;

const int Nmaks = 200;

void HitungIndeksNilai(float NilUjian[], char Indeks[], int n) {
    for (int i = 0; i < n; i++) {
        if (NilUjian[i] >= 80)
            Indeks[i] = 'A';
        else if (NilUjian[i] >= 70)
            Indeks[i] = 'B';
        else if (NilUjian[i] >= 55)
            Indeks[i] = 'C';
        else if (NilUjian[i] >= 45)
            Indeks[i] = 'D';
        else
            Indeks[i] = 'E';
    }
}

void CetakNilai(float NilUjian[], char Indeks[], int n) {
    cout << "---------------------------------------------\n";
    cout << "i\tNilai Ujian\tIndeks Nilai\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << NilUjian[i] << "\t\t" << Indeks[i] << "\n";
    }
    cout << "---------------------------------------------\n";
}

int main() {
    int n;
    float NilUjian[Nmaks];
    char Indeks[Nmaks];

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nilai ujian mahasiswa ke-" << i + 1 << ": ";
        cin >> NilUjian[i];
    }

    HitungIndeksNilai(NilUjian, Indeks, n);
    CetakNilai(NilUjian, Indeks, n);

    return 0;
}
