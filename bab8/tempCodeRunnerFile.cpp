#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan tinggi segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {//naik
        for (int j = 1; j <= i; j++) {
            cout << "*"; 
        }
        cout << endl;
    }
    return 0;
}
