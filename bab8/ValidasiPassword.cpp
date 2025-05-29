#include <iostream>
using namespace std;

int main(){
    const string password = "abc123";
    string katasandi;
    bool sah=false;
    int count=1;
    
    while (!sah && count <= 3){
        cout << "Masukkan kata sandi: ";
        cin >> katasandi;
        if (katasandi == password){
            sah = true;
        }else {
            cout << "Kata sandi salah.\n";
            count++;
        }
    }

    if (sah){
        cout << "Akses diterima\n";
    }else {
        cout << "Akses ditolak.\n Percobaan melebihi batas, silahkan coba beberapa saat lagi.";
    }
    return 0;
}