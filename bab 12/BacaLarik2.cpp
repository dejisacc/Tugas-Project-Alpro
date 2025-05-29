#include <iostream>
using namespace std;

void BacaLarik2(int A[], int &n) {
    int i=0;
    char jawab;

    do {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> A[i];
        cout << "Apakah Anda ingin memasukkan elemen lain? (y/n): ";
        cin >> jawab; 
        i++;
    }while (jawab == 'y' && jawab != 'n');
    n = i;
}

int main() {
    int n, i;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    BacaLarik2(A, n);

    cout << "Data: ";
    for (i = 0; i <= n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}