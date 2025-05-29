#include <iostream>
using namespace std;

void Tukar(int &m, int &n){
    int o;
    o = m;
    m = n;
    n = o;
}

int main(){
    int m,n;
    cout << "Masukkan nilai pertama: ";
    cin >> m;
    cout << "Masukkan nilai kedua: ";
    cin >> n;
    cout << "Nilai sebelum ditukar: " << m << " " << n << endl;
    Tukar(m,n);
    cout << "Nilai sesudah ditukar: " << m << " " << n << endl;
} 