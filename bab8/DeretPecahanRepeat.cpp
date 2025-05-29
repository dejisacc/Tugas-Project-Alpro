#include <iostream>
using namespace std;

int main() {
    int x;         // Data bilangan bulat (penyebut)
    double s = 0;  // Jumlah deret
    cout << "Masukkan penyebut (-1 untuk berhenti): ";
    cin >> x;

    do {
        s += 1.0 / x;
        cout << "Masukkan penyebut (-1 untuk berhenti): ";
        cin >> x;
    } while (x != -1);

    cout << "Jumlah deret pecahan adalah: " << s << endl;

    return 0;
}