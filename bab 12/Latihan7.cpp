#include <iostream>
#include <cmath>
using namespace std;

void simpanganBaku (int A[], int n, double &simpangan){
    double total = 0;
    double rata = 0;
    for (int i = 0; i < n; i++){
        total += A[i];
    }
    rata = total / n;
    
    double totalSelisihKuadrat = 0;
    for (int i = 0; i < n; i++){
        totalSelisihKuadrat += pow(A[i] - rata, 2);
    }
    
    simpangan = sqrt(totalSelisihKuadrat / n);
}

int main(){
    int n;
    double simpangan;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    int A[n];
    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> A[i];
    }
    
    simpanganBaku(A, n, simpangan);
    
    cout << "Simpangan baku: " << simpangan << endl;
    
    return 0;
}