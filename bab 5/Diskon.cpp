#include <iostream>
using namespace std;

int main(){
    int harga;
    float disc = 0.05;
    cout << "Masukkan harga barang: ";
    cin >> harga;

    float hargaDisc = harga - (harga*0.05);
    cout << "Harga barang setelah diskon 5%: " << hargaDisc;
    return 0;
}