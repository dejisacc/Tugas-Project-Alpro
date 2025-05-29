#include <iostream>
using namespace std;

void cariModus(int A[], int n){
    int modus = A[0];
    int frekuensiMaks = 0;
    for (int i = 0; i < n; i++){
        int frekuensi = 1;
        for (int j = i + 1; j < n; j++){
            if (A[i] == A[j]){
                frekuensi++;
            }
        }

        //cek frekuensi saat ini lebih besar dari sebelumnya apa gak
        if (frekuensi > frekuensiMaks) {
            frekuensiMaks = frekuensi;
            modus = A[i];
        }
    }

    cout << "Modus = " << modus << " (muncul " << frekuensiMaks << " kali)" << endl;
}

int main() {
    int A[] = {1, 2, 2, 3, 4, 2, 5};
    int n = sizeof(A) / sizeof(A[0]);
    cariModus(A, n);

    return 0;
}
