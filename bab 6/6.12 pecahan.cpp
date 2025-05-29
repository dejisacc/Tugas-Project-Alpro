#include <iostream>
using namespace std;

struct Pecahan {
    int a, b;
};

int main() {
    Pecahan p1, p2, p3;
    cout << "Masukkan pecahan pertama (pembilang penyebut): ";
    cin >> p1.a >> p1.b;
    cout << "Masukkan pecahan kedua (pembilang penyebut): ";
    cin >> p2.a >> p2.b;

    //penjumlahan
    p3.a = p1.a * p2.b + p2.a * p1.b;
    p3.b = p1.b * p2.b;
    cout << "Hasil Penjumlahan: " << p3.a << "/" << p3.b << endl;

    //pengurangan
    p3.a = p1.a * p2.b - p2.a * p1.b;
    p3.b = p1.b * p2.b;
    cout << "Hasil Pengurangan: " << p3.a << "/" << p3.b << endl;

    //perkalian
    p3.a = p1.a * p2.a;
    p3.b = p1.b * p2.b;
    cout << "Hasil Perkalian: " << p3.a << "/" << p3.b << endl;

    //pembagian
    p3.a = p1.a * p2.b;
    p3.b = p1.b * p2.a;
    cout << "Hasil Pembagian: " << p3.a << "/" << p3.b << endl;

    return 0;
}