#include <iostream>
using namespace std;

/*buatlah algoritma ygy menerima masukan nama kota dan menuliskan kode pos kota tsv ke piranti keluaran*/
int main(){
    string kota;
    cout << "Masukkkan Kota (misal 'Bandung'): ";
    cin >> kota;

    if(kota == "Padang"){
        cout << "kode pos: 25000";
    }else{
        if(kota == "Bandung"){
            cout << "kode pos: 40100";
        }else{
            if(kota == "Solo"){
                cout << "kode pos: 51000";
            }else{
                if(kota == "Denpasar"){
                    cout << "kode pos: 72000";
                }else{
                    if(kota == "Palu"){
                        cout << "kode pos: 92300";
                    }else{
                        cout << "tidak ada dalam daftar";
                    }
                }
            }
        }
    }
}