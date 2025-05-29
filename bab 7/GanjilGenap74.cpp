#include <iostream>
using namespace std;

/*tulislah algoritma yang menerima input sebuah bilangan bulat lalumenuliskan pesan "genap" bila genap,
dan "ganjil" bila ganjil*/
int main(){
    int x;
    cout << "Masukkan bilangan: ";
    cin >> x;

    if(x%2==0){
        cout << "Bilangan adalah genap";
    }else{
        cout << "Bilangan adalah ganjil";
    }
}