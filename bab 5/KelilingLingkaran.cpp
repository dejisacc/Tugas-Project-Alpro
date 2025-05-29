#include <iostream>
using namespace std;

int main(){
    float r; //jari2
    float pi = 3.14;
    cout << "Masukkan jari-jari keliling (cm): ";
    cin >> r;

    float k = 2*pi*r;
    cout <<"Keliling lingkaran: " << k << "cm\n";
    return 0;
}