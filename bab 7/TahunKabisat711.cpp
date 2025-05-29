#include <iostream>
using namespace std;

//tentukan apakah tahun merupakan kabisat atau bukan ver 1
int main(){
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun%4==0){
        cout << "Tahun " << tahun << " merupakan tahun kabisat";
    }else{
        cout << "Tahun " << tahun << " bukan merupakan tahun kabisat";
    }
}