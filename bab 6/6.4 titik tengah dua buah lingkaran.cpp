#include <iostream>
using namespace std;

struct Titik {
    double x, y;
};

int main() {
    Titik P1, P2, P3;
    char comma; 

    cout << "Masukkan koordinat P1 (x,y): ";
    cin >> P1.x >> comma >> P1.y;
    cout << "Masukkan koordinat P2 (x,y): ";
    cin >> P2.x >> comma >> P2.y;

    //titik tengah
    P3.x = (P1.x + P2.x) / 2;
    P3.y = (P1.y + P2.y) / 2;
    cout << "Titik tengah P3: (" << P3.x << ", " << P3.y << ")" << endl;

    return 0;
}