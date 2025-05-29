#include <iostream>
using namespace std;

void cariKPK(int a, int b) {
    int maks;
    if (a > b) {
        maks = a;
    } else {
        maks = b;
    }

    int kpk = maks;

    while (true) {
        if (kpk % a == 0 && kpk % b == 0) {
            break;
        }
        kpk++;
    }

    cout << "KPK dari " << a << " dan " << b << " adalah: " << kpk << endl;
}

int main() {
    int angka1, angka2;
    cout << "Masukkan bilangan bulat pertama: ";
    cin >> angka1;
    cout << "Masukkan bilangan bulat kedua: ";
    cin >> angka2;

    cariKPK(angka1, angka2);
    return 0;
}
