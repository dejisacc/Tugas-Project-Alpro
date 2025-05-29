#include <iostream>
using namespace std;

//membaca waktu tempuh pelari marathon dalam jam, menit, detik, lalu mengkonversi awktu tempuh tersebut ke dalam detik

main() {
    typedef struct {
        long int hh;
        long int mm;
        long int ss;
    } Jam;

    Jam J;
    long int TotalDetik;

    //algoritma:
    cout << "Total jam: " ; cin >> J.hh;
    cout << "Total menit: " ; cin >> J.mm;
    cout << "Total detik: " ; cin >> J.ss;
    TotalDetik = (J.hh*3600) + (J.mm*60) + J.ss;
    cout << "Total detik = " << TotalDetik;
}