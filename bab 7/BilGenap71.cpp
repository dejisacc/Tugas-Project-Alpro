#include <iostream>
using namespace std;

//tulislah algoritma yg menerima  input bil. bulat lalu mencetak "genap" bila bil. yg dimasukkan bil. genap
int main(){
    int x;
    cout << "Masukkan bilangan bulat: ";
    cin >> x;
    if (x%2==0){
        cout << "Bilangan adalah genap";
    }
}