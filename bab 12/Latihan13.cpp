#include <iostream>
#include <string>
using namespace std;

void gabungString(string S1, string S2) {
    string hasil = S1 + S2;  
    cout << "Hasil penggabungan: " << hasil << endl;
}

int main() {
    string S1, S2;
    cout << "Masukkan string pertama (S1): ";
    getline(cin, S1);
    cout << "Masukkan string kedua (S2): ";
    getline(cin, S2);

    gabungString(S1, S2);

    return 0;
}
