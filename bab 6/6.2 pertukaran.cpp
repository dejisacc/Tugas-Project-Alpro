#include <iostream>
using namespace std;

main () {
    int A, B, C;
    //misal A diisi 8 & B diisi 5
    A = 8;
    B = 5;

    //cetak nilai A & B sebelum pertukaran
    cout << "Nilai A dan B sebelum ditukar: \n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    //pertukaran nilai A & B
    C = A;
    A = B;
    B = C;

    //cetak nilai A & B setelah pertukaran
    cout << "Nilai A dan B setelah ditukar: \n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}