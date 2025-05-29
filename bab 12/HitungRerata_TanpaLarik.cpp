#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3, x4, x5, x6;
    float u;
    cout << "Masukkan x1: "; cin >> x1;
    cout << "Masukkan x2: "; cin >> x2;
    cout << "Masukkan x3: "; cin >> x3;
    cout << "Masukkan x4: "; cin >> x4;
    cout << "Masukkan x5: "; cin >> x5;
    cout << "Masukkan x6: "; cin >> x6;

    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
    cout << "x3: " << x3 << endl;
    cout << "x4: " << x4 << endl;
    cout << "x5: " << x5 << endl;
    cout << "x6: " << x6 << endl;

    u = (x1 + x2 + x3 + x4 + x5 + x6)/6;
    cout << "Rerata: " << u;
}