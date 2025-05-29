#include <iostream>
#include <cmath> //untuk fungsi pow (pangkat)

using namespace std;

double hitungJumlahUang(double A, double i, int n) {
    double F = 0.0;
    double bunga = 1 + (i / 100);

    for (int tahun = 1; tahun <= n; tahun++) {
        F += A * pow(bunga, tahun);
    }

    return F;
}

int main() {
    double A, i;
    int n;

    cout << "Masukkan jumlah uang awal (A): ";
    cin >> A;
    cout << "Masukkan persentase bunga (i): ";
    cin >> i;
    cout << "Masukkan jumlah tahun (n): ";
    cin >> n;

    double F = hitungJumlahUang(A, i, n);
    cout << "Jumlah uang setelah " << n << " tahun adalah: " << F << " rupiah" << endl;

    return 0;
}