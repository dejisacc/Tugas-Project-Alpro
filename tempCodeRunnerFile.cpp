#include <iostream>
using namespace std;

void salinLarik(int A[], int n, int* &B){
    int i;
    B = new int[n]; // allokasikan memori untuk B
    for (i = 0; i < n; i++){
        B[i] = A[i];
    }
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int *B = nullptr; // inisialisasi pointer B

    cout << "Sebelum disalin" << endl;
    cout << "Array A: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Setelah disalin:" << endl;
    salinLarik(A, n, B);
    cout << "Array A: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }
    cout << endl;
    
    delete[] B; // hapus memori yang dialokasikan untuk B
    return 0;
}