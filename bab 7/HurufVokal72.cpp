#include <iostream>
using namespace std;

/*tulislah algoritma yg menerima input sebuah karakter dan menuliskan pesan "huruf vokal" jika karakter merupakan 
salah satu dari huruf vokal*/
main(){
    char cc;
    cout << "Masukkan 1 karakter: ";
    cin >> cc;

    if (cc == 'a' || cc == 'i' || cc == 'u' || cc == 'e'|| cc == 'o'){
        cout << "Karakter merupakan huruf vokal";
    }
        
}