#include <iostream>
using namespace std;

int main(){
    int f;//fahrenheit
    cout << "Masukkan suhu dalam fahrenheit: ";
    cin >> f;

    int c = (f-32)*5/9; //celcius
    cout << "Suhu dalam celcius: " << c;
    return 0;
}