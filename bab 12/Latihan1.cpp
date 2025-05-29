#include <iostream> 
using namespace std;

int cariElemen(int A[], int n, int x){
    for (int i = 0; i < n; i++){
        if (A[i] == x){
            return i;  // klau ketemu
        }
    }
    return -1;  // kalau gak ketemu
}

int main(){
    int n = 5;  // jumlah elemen dalam array
    int A[5] = {3, 5, 7, 9, 11};

    int x;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;
    
    int hasil = cariElemen(A, n, x);
    if (hasil != -1){
        cout << "Elemen ditemukan pada indeks ke-" << hasil << endl;
    } else {
        cout << A[0] << ". Elemen tidak ditemukan." << endl;
    }
    
    return 0;
}