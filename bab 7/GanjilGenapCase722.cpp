#include <iostream>
using namespace std;

/*tulislah algoritma yang menerima input sebuah bilangan bulat lalumenuliskan pesan "genap" bila genap,
dan "ganjil" bila ganjil*/
int main(){
    int x;
    cout << "Masukkan bilangan: ";
    cin >> x;

    switch (x%2){
        case 0:
            cout << "angka genap"; break;
        case 1:
            cout << "angka ganjil"; break;
    }
}