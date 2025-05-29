#include <iostream>
using namespace std;

void hitung(int n, int *m) {
    *m = 0; 
    for (int i = 0; i < n; i++) {
        *m += 2 * i; //(0, 2, 4, ...)
    }
}

int main() {
    int n; //banyaknya data yang dijumlahkan
    int m; //hasil penjumlahan

    cout << "Masukkan jumlah bilangan genap yang ingin dihitung: ";
    cin >> n;

    hitung(n, &m);

    cout << "Jumlah dari " << n << " bilangan genap pertama adalah " << m << endl;
    return 0;
}