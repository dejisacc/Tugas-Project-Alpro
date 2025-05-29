#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> satuan = {
    "", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"
};

vector<string> belasan = {
    "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas",
    "enam belas", "tujuh belas", "delapan belas", "sembilan belas"
};

vector<string> puluhan = {
    "", "sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh",
    "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"
};

vector<string> ribuan = {
    "", "seribu", "dua ribu", "tiga ribu", "empat ribu", "lima ribu",
    "enam ribu", "tujuh ribu", "delapan ribu", "sembilan ribu"
};

string AngkaToText(int angka) {
    if (angka == 0) return "nol";

    string hasil = "";

    //menghitung ribuan
    if (angka >= 1000) {
        hasil += ribuan[angka / 1000] + " ";
        angka %= 1000;
    }

    //menghitung ratusan
    if (angka >= 100) {
        hasil += satuan[angka / 100] + " ratus ";
        angka %= 100;
    }

    //menghitung puluhan
    if (angka >= 20) {
        hasil += puluhan[angka / 10] + " ";
        angka %= 10;
    } else if (angka >= 10) {
        hasil += belasan[angka - 10] + " ";
        return hasil;
    }

    //menghitung satuan
    if (angka > 0) {
        hasil += satuan[angka] + " ";
    }
    return hasil;
}

int main() {
    int angka;
    cout << "Masukkan nilai integer positif: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Masukan harus nilai positif." << endl;
    } else {
        string hasil = AngkaToText(angka);
        cout << "Hasil: " << hasil << endl;
    }
    return 0;
}