#include <iostream>
using namespace std;

const int Nmaks = 100;

void BacaLarik(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> A[i];
    }
}

void CariMaks3(int A[], int n, int &idxMaks) {
    idxMaks = 0; 
    for (int i = 1; i < n; i++) {
        if (A[i] > A[idxMaks]) {
            idxMaks = i; 
        }
    }
}

int main() {
    int A[Nmaks];
    int n, idxMaks;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    BacaLarik(A, n);
    CariMaks3(A, n, idxMaks);

    cout << "Elemen terbesar: " << A[idxMaks] << endl;

    return 0;
}
