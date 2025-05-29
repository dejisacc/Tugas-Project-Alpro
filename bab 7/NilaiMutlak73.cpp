#include <iostream>
#include <cmath>
using namespace std;

/*untuk sembarang nilai x, buatlah algoritma yang membaca sebuah bil. riil lalu tentukan nilai mutlaknya
 & cetak nilai mutlaknya ke layar*/
int main(){
    int x;
    cout << "Masukkan bilangan : ";
    cin >> x;
    
    if(x<0){
        cout << "nilai mutlaknya adalah " << abs(x);
    }
}