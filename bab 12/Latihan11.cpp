#include <iostream>
using namespace std;

bool apakahSama(int A[], int n) {
    //klau kosong atau hanya memiliki satu elemen, dianggap sama
    if (n == 0 || n == 1) {
        return true;
    }

    int elemen1 = A[0]; //pembanding

    //periksa setiap elemen
    for (int i = 1; i < n; i++) {
        if (A[i] != elemen1) {
            return false; //kalau beda
        }
    }
    return true; //semua elemen sama
}

int main() {
    int A[] = {5, 5, 5, 0, 5}; // Contoh larik
    int n  = sizeof(A) / sizeof(A[0]);

    if (apakahSama(A, n)) {
        cout << "Semua elemen dalam larik sama." << endl;
    } else {
        cout << "Tidak semua elemen dalam larik sama." << endl;
    }

    return 0;
}
