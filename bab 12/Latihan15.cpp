#include <iostream>
using namespace std;

// Prosedur untuk menggeser larik secara sirkular ke kanan
void geserKiriSirkular(int A[], int n) {
    if (n <= 1) return;  // Tidak perlu digeser jika ukuran <= 1

    int temp = A[n - 1];  // Simpan elemen terakhir

    // Geser elemen ke kanan
    for (int i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }

    A[0] = temp;  // Tempatkan elemen terakhir ke posisi pertama

    // Cetak hasil
    cout << "Setelah digeser ke kiri sirkular: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Sebelum digeser: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    geserKiriSirkular(A, n);  // Panggil prosedur

    return 0;
}
