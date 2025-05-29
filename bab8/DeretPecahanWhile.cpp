#include <iostream>
using namespace std;

int main() {
    int x;         // Data bilangan bulat (penyebut)
    double s = 0;  // Jumlah deret
    cout << "Masukkan penyebut (-1 untuk berhenti): ";
    cin >> x;

    while (x != -1) {
        s += 1.0 / x;  // Menambahkan pecahan ke jumlah
        cout << "Masukkan penyebut (-1 untuk berhenti): ";
        cin >> x;      // Membaca bilangan berikutnya
    }

    cout << "Jumlah deret pecahan adalah: " << s << endl;

    return 0;
}