#include <iostream>
using namespace std;

int main() {
    float gajiPokok;
    float tunjanganAnak;
    float tunjanganIstri;

    cout << "Masukkan gaji pokok: ";
    cin >> gajiPokok;

    tunjanganAnak = 0.02 * gajiPokok;
    tunjanganIstri = 0.10 * gajiPokok;
    float totalGaji = gajiPokok + tunjanganAnak + tunjanganIstri; 
    cout << "Total gaji yang diterima (gaji pokok, tunjangan anak & istri): " << totalGaji;
    return 0;
}
