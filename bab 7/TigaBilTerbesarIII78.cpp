#include <iostream>
using namespace std;

//buatlah algoritma yang membaca tiga buah bilangna bulat lalu cetak bilangan terbesarnya ver 3
int main(){
    int x, y, z;
    cout << "Masukkan nilai pertama: ";
    cin >> x;
    cout << "Masukkan nilai kedua: ";
    cin >> y;
    cout << "Masukkan nilai ketiga: ";
    cin >> z;

    if (x>y && x>z){
        cout << "Bilangan terbesar adalah " << x;
    }else{
        if(y>x && y>z){
            cout << "Bilangan terbesar adalah " << y;
        }else{
            cout << "Bilangan terbesar adalah " << z;
        }
    }
}