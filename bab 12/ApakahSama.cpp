#include <iostream> 
using namespace std;

bool apakahSama(int A[], int B[], int n) {
    int i = 0;
    bool sama = true; //asumsi sementara kedua larik sama
    while (i < n){
        if (A[i] == B[i]){
            i++;
        }else {
            sama = false; //kalau ada yang beda
            break;
        }
    }
    return sama; //kembalikan hasil
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {1, 2, 3, 4, 9};
    int n = sizeof(A) / sizeof(A[0]);
    
    cout << "Tampilan larik A: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Tampilan larik B: ";
    for (int i = 0; i < n; i++){
        cout << B[i] << " ";
    }
    cout << endl;

    
    if (apakahSama(A, B, n)) {
        cout << "Semua elemen dalam larik sama." << endl;
    } else {
        cout << "Tidak semua elemen dalam larik sama." << endl;
    }
    
    return 0;
}