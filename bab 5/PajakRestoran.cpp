#include <iostream>
using namespace std;

int main(){
    float bill;
    float pajak = 0.11;
    cout << "Masukkan total harga: ";
    cin >> bill;

    float total = bill + bill*pajak;
    cout << "Total yang harus dibayar (termasuk pajak): " << total << endl;
    return 0;
}