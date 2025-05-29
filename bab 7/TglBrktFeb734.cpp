#include <iostream>
using namespace std;

struct Tanggal {
    int dd, mm, yy;
};

bool Kabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int main() {
    Tanggal T;
    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> T.dd >> T.mm >> T.yy;

    if (T.mm == 2) {  
        if (T.dd < 28) {
            T.dd += 1; 
        } else {
            if (Kabisat(T.yy)) {
                if (T.dd == 28) {
                    T.dd += 1; 
                } else {
                    T.dd = 1;  
                }
            } else {
                T.dd = 1;  
                T.mm = 3;
            }
        }
    }

    cout << "Tanggal besok: " << T.dd << "/" << T.mm << "/" << T.yy << endl;
    return 0;
}