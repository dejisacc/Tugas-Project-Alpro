#include <iostream>
using namespace std;

void BintangDiamond(int n) {
    int tengah = n / 2 + 1;

    //bagian atas
    for (int i = 1; i <= tengah; i++) {
        //spasi
        for (int spasi = 1; spasi <= tengah - i; spasi++) {
            cout << " ";
        }
        //bintang
        for (int bintang = 1; bintang <= 2 * i - 1; bintang++) {
            cout << "*";
        }
        cout << endl;
    }

    //bagian bawah
    for (int i = tengah - 1; i >= 1; i--) {
        //spasi
        for (int spasi = 1; spasi <= tengah - i; spasi++) {
            cout << " ";
        }
        //bintang
        for (int bintang = 1; bintang <= 2 * i - 1; bintang++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 7; //ganjil
    BintangDiamond(n);
    return 0;
}
