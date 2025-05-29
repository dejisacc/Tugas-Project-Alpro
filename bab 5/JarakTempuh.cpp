#include <iostream>
using namespace std;

int main(){
    int v; //kecepatan
    double t; //waktu tempuh dalam jam
    int s; //jarak tempuh dalam km
    cout << "Masukkan kecepatan mobil (km/jam): ";
    cin >> v;
    cout << "Masukkan waktu tempuh mobil (jam): " ;
    cin >> t;
    
    s = v*t;
    cout << "Jarak yang telah ditempuh mobil: " << s << " km";
    return 0;
}