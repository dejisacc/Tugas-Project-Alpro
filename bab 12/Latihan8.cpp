#include <iostream>
using namespace std;

void besarDariJumlahSebelumnya(int A[], int n) {
    int jmlhSblmny = 0;
    cout << "Elemen yang lebih besar dari jumlah seluruh elemen sebelumnya:" << endl;
    for(int i = 0; i < n; i++) {
        if(A[i] > jmlhSblmny) {
            cout << A[i] << " ";
        }
        jmlhSblmny += A[i];
    }
}

int main() {
    int A[] = {3, 5, 40, 11, 88, 50, 100};
    int n = sizeof(A) / sizeof(A[0]);
    besarDariJumlahSebelumnya(A, n);
    return 0;
}

