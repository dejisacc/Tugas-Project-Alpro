#include <iostream>
using namespace std;

int main(){
    int i, n, x;
    cout << "Masukkan banyaknya data: ";
    cin >> n;

    int sum=0;
    i=1;
    while (i<=n){
        sum = sum+i;
        i++;
    }
    cout << "Hasil penjumlahan dari angka 1-" << n << " adalah " << sum << endl;

    return 0;
}