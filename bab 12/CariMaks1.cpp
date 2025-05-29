#include <iostream>
using namespace std;

void CariMaks1 (int A[], int n, int &maks){
    int i;
    maks = -9999; //nilai maks sementara
    for (i = 1; i <= n; i++){
        if (A[i] > maks){
            maks = A[i];
        }
    }
}

int main(){
    int n, i;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    cout << "Masukkan banyak data yang akan dimasukkan: ";
    cin >> n;
    for (i = 1; i <= n; i++){
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> A[i];
    }
    
    int maks;
    CariMaks1(A, n, maks);
    cout << "Nilai maksimum: " << maks << endl;
    
    return 0;
}
