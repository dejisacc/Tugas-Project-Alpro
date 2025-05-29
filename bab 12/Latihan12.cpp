#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menyisipkan karakter pada posisi tertentu dalam string
string masukkanChar(string str, int posisi, char X) {
    //periksa apakah posisi valid
    if (posisi > str.length()) {
        return ""; //kalau posisi invalid
    }
    
    // memasukkan karakter pada posisi yang ditentukan
    str.insert(posisi-1, 1, X); // rubah indeks mulai dari 0 ke 1
    return str; 
}

int main() {
    string str = "hello"; 
    int posisi;
    char ch = 'X'; 
    cout << "Masukkan posisi untuk menyisipkan karakter (1 sampai " << str.length() << "): ";
    cin >> posisi;
   
    string modifikasi = masukkanChar(str, posisi, ch);

    cout << "Asal string: " << str << endl;

    if (modifikasi.empty()) {
        cout << "Posisi lebih besar dari panjang atau lebih pendek dari string." << endl;
    } else {
        cout << "Setelah disisipkan: " << modifikasi << endl;
    }

    return 0;
}
