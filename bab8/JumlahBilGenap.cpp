#include <iostream>
using namespace std;

int main(){
    int x;
    int nx = 0;
    cout << "Masukkan bilangan pertama: ";
    cin >> x;

    while (x != -1){
        if (x%2 == 0){
            nx++;
        }
        cout << "Masukkan angka selanjutnya: ";
        cin >> x;
    }
    cout << "Terdapat " << nx << " bilangan genap";
}