#include <iostream>
using namespace std;

int main(){
    double a; //nilai yang dipangkatan
    int n; //pemangkat
    double p; //hasil perpangkatan
    int i; //pencacah pengulangan

    cout << "Masukkan nilai yang akan dipangkatkan: "; 
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> n;

    p = 1;
    for (i=1; i<=n; i++){
        p = p*a;
    }

    cout << "Hasil pemangkatan: " << p;
    return 0;
}