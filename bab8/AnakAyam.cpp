#include <iostream>
using namespace std;

main(){
    int n,i;
    cout << "Masukkan berapa banyak anak ayam yang turun: ";
    cin >> n;
    cout << "Anak Ayam Turun " << n << endl;

    for (i=n; i>1; i--) {
        cout << "Anak ayam turun " << i << ", mati satu tinggal " << i-1 << endl;
    }

    cout << "Anak ayam turun 1, mati satu tinggal induknya\n";
    return 0; 
}