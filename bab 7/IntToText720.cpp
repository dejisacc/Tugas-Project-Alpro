#include <iostream>
using namespace std;

/*buatlah algoritma yang menerima msukan sebuah bilangan bulat yang nilainya terletak antara 1-4, lalu
mecetak tulisan angka dalam kata-kata dengan if-then-else*/
int main(){
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka==1){
        cout << "satu";
    }else{
        if (angka==2){
            cout << "dua";
        }else{
            if (angka==3){
                cout << "tiga";
            }else{
                if (angka==4){
                    cout << "empat";
                }else{
                    cout << "angka yang dimasukkkan harus 1-4";
                }
            }
        }
    }
}