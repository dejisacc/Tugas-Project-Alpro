#include <iostream> 
using namespace std;

void BacaLarik3 (int A[], int &n){
    int i, x;
    i=0;
    cout << "Masukkan data pertama (masukkan 9999 untuk berhenti): ";
    cin >> x;

    while (x != 9999){
        i++;
        A[i] = x;
        cout << "Masukkan data berikutnya (masukkan 9999 untuk berhenti): ";
        cin >> x;
    }
    n = i;
}

void CetakLarik (int A[], int n){
    int i;
    for (i = 1; i <= n; i++){
        cout <<A[i] << " ";
    }
}

int main(){
    int n, i;
    int A[100]; //asumsi ukuran maksimum array adalah 100
    BacaLarik3(A, n);
    cout << "Data array: ";
    CetakLarik(A, n);

    return 0;
}