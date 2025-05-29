#include <iostream>
using namespace std;

//tentukan apakah tahun merupakan kabisat atau bukan ver 2
int main(){
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)){
        cout << "Tahun " << tahun << " merupakan tahun kabisat";
    }else{
        cout << "Tahun " << tahun << " bukan merupakan tahun kabisat";
    }
}