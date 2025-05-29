#include <iostream>
using namespace std;

void lebihBesarDariIdxTengah(int A[], int n) {
    int idxTengah = n / 2;
    int nilaiTengah = A[idxTengah];

    cout << "Elemen yang lebih besar daripada elemen tengah (" << nilaiTengah << "):" << endl;
    for(int i = 0; i < n; i++) {
        if(A[i] > nilaiTengah) {
            cout << A[i] << " ";
        }
    }
}

int main() {
    int A[] = {38, 5, 10, 35, 90, 0, 33};
    int n = sizeof(A) / sizeof(A[0]);

    lebihBesarDariIdxTengah(A, n);

    return 0;
}

