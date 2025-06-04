#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int Nangka = 0;
    int Nspasi = 0;
    int Nlainnya = 0;

    // Prompt until user gives at least one character
    do {
        cout << "Masukkan kalimat (akhiri dengan titik '.'): ";
        getline(cin, input);
    } while (input.empty()); // make sure input is not empty

    for (char cc : input) {
        if (cc == '.') break; // berhenti saat ketemu titik

        if (cc >= '0' && cc <= '9') {
            Nangka++;
        } else if (cc == ' ') {
            Nspasi++;
        } else {
            Nlainnya++;
        }
    }

    cout << "\nJumlah angka: " << Nangka << endl;
    cout << "Jumlah spasi: " << Nspasi << endl;
    cout << "Jumlah karakter lainnya: " << Nlainnya << endl;

    return 0;
}
