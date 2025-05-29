#include <iostream>
using namespace std;

void Piramid(int n) {
    for (int i = 1; i <= n; i++) {
        //spasi kiri
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }

        //naik
        for (int j = 0; j < i; j++) {
            cout << (i + j) % 10;
        }

        //turun
        for (int j = i - 2; j >= 0; j--) {
            cout << (i + j) % 10;
        }

        cout << endl;
    }
}

int main() {
    int n = 6;
    Piramid(n);
    return 0;
}
