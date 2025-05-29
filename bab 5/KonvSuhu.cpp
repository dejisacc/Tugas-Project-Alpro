#include <iostream>
using namespace std;

int main(){
    int c;//celcius
    cout << "Masukkan suhu dalam celcius: ";
    cin >> c;

    int f = (c*9/5) + 32; //fahrenheit
    cout << "Suhu dalam fahrenheit: " << f;
    return 0;
}