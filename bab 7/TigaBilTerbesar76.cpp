#include <iostream>
using namespace std;

//buatlah algoritma yang membaca tiga buah bilangna bulat lalu cetak bilangan terbesarnya
int main(){
    int x, y, z;
    cout << "Masukkan nilai pertama: ";
    cin >> x;
    cout << "Masukkan nilai kedua: ";
    cin >> y;
    cout << "Masukkan nilai ketiga: ";
    cin >> z;

    int max;
    if (x>y){
        max = x;
    }else{ 
        max = y;
    }

    if (max<z){
        max = z;
    }

    cout << "Nilai maksimumnya adalah " << max << endl;
    return 0;
}