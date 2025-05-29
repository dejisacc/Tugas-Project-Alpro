#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a; //nilai yang dipangkatan
    int n, m; //pemangkat
    double p; //hasil perpangkatan
    int i; //pencacah pengulangan

    cout << "Masukkan nilai yang akan dipangkatkan: "; 
    cin >> a;
    cout << "Masukkan pangkat: ";
    cin >> n;

    p = 1;
    for (i=1; i<=abs(n); i++){
        p = p*a;
    }

    if (n < 0){
        cout << "Hasil pemangkatan: " << 1/p;
    }else {
        cout << "Hasil pemangkatan: " << p;
    }

    return 0;
}