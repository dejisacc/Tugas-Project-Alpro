#include <iostream>
using namespace std;

//buatlah algoritma yang membaca dua buah bilangna bulat lalu cetak bilangan terbesarnya
int main(){
    int x, y;
    cout << "Masukkan nilai pertama: ";
    cin >> x;
    cout << "Masukkan nilai kedua: ";
    cin >> y;

    if(x>y){
        cout << x << " adalah bilangan terbesar";
    }else{
        cout << y << " adalah bilangan terbesar";
    }
}