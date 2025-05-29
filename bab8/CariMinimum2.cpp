#include <iostream>
using namespace std;

int main(){
    int x;
    int min;
    cout << "Masukkan data pertama: ";
    cin >> x;

    if (x == -1){
        cout << "Tidak ada data yang dimasukkan";
    }else {
        min = x;
        cout << "Masukkkan data selanjutnya: ";
        cin >> x;

        while (x != -1 ){
            if (x < min){
                min =x;
            }
            cout << "Masukkan data selanjutnya: ";
            cin >> x;
        }
        
        cout << "Nilai terkecil adalah " << min;
    }
}