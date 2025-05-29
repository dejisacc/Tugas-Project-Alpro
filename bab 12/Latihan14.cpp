#include <iostream>
#include <string>
using namespace std;

void hapusHurufC(string s) {
    string hasil = "";
    for (char ch : s) {
        if (ch != 'c') {
            hasil += ch;  // Tambahkan karakter jika bukan 'c'
        }
    }

    cout << "Hasil setelah huruf 'c' dihapus: " << hasil << endl;
}

int main() {
    string s = "cacing";  
    cout << "String asli: " << s << endl;
    hapusHurufC(s); 

    return 0;
}
