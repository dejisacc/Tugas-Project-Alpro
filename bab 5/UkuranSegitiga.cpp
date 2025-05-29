#include <iostream>
using namespace std;

int main(){
    float alas, tinggi, luas;
    cout << "Masukkan alas segitiga (cm): ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga (cm): ";
    cin >> tinggi;

    luas = 0.5*alas*tinggi;
    cout << "Luas segitiga tersebut adalah " << luas << "m^2";
    return 0;
}