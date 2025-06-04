#include <iostream>
#include <string>
#include <tuple>
using namespace std;

//fungsi hex ke rgb
int r, g, b;
tuple<int, int, int> hexToRGB(string &hexdasarWarna) {
    r = stoi(hexdasarWarna.substr(1, 2), nullptr, 16);
    g = stoi(hexdasarWarna.substr(3, 2), nullptr, 16);
    b = stoi(hexdasarWarna.substr(5, 2), nullptr, 16);

    return {r, g, b};
}

int rKom, gKom, bKom; //variabel untuk menyimpan rgb warna komplementer
tuple<int, int, int> rgbKomplementer (int &r, int &g, int &b){
    rKom = 255 - r;
    gKom = 255 - g;
    bKom = 255 - b;
    return {rKom, gKom, bKom};
}

//fungsi untuk mendapatkan warna senada kanan
//warna senada kanan adalah warna yang paling tua dari warna dasar
int rK1, gK1, bK1; //variabel untuk menyimpan rgb warna senada kanan
tuple<int, int, int> rgbSenadaKanan (int &r, int &g, int &b){
    rK1 = (r + 30 > 255) ? 255 : r + 30;
    /*gK1 = (g + 30 > 255) ? 255 : g + 30; 
    bK1 = (b + 30 > 255) ? 255 : b + 30;*/
    return {rK1, g, b};
}

//fungsi untuk mendapatkan warna senada kiri
//warna senada kiri adalah warna paling muda dari warna dasar
int rK2, gK2, bK2; //variabel untuk menyimpan rgb warna senada kiri
tuple<int, int, int> rgbSenadaKiri (int &r, int &g, int &b){
    rK2 = (r - 30 < 0) ? 0 : r - 30;
    /*gK2 = (g - 30 < 0) ? 0 : g - 30; 
    bK2 = (b - 30 < 0) ? 0 : b - 30;*/
    return {rK2, g, b};
}

//fungsi konversi rgb ke hex
string rgbToHex(int &r, int &g, int &b) {
    string hexWarna = "#";
    hexWarna.substr(1, 2) = (r/16) + (r%16);
        if (r/16 < 10) {
            hexWarna += to_string(r/16);
        } else if (r/16 == 10) {
            hexWarna += char('A');
        } else if (r/16 == 11) {
            hexWarna += char('B');
        } else if (r/16 == 12) {
            hexWarna += char('C');
        } else if (r/16 == 13) {
            hexWarna += char('D');
        } else if (r/16 == 14) {
            hexWarna += char('E');
        } else if (r/16 == 15) {
            hexWarna += char('F');
        }

        if (r%16 < 10) {
            hexWarna += to_string(r%16);
        } else if (r%16 == 10) {
            hexWarna += char('A');
        } else if (r%16 == 11) {
            hexWarna += char('B');
        } else if (r%16 == 12) {
            hexWarna += char('C');
        } else if (r%16 == 13) {
            hexWarna += char('D');
        } else if (r%16 == 14) {
            hexWarna += char('E');
        } else if (r%16 == 15) {
            hexWarna += char('F');
        }
    hexWarna.substr(3, 2) = (g/16) + (g%16);
        if (g/16 < 10) {
            hexWarna += to_string(g/16);
        } else if (g/16 == 10) {
            hexWarna += char('A');
        } else if (g/16 == 11) {
            hexWarna += char('B');
        } else if (g/16 == 12) {
            hexWarna += char('C');
        } else if (g/16 == 13) {
            hexWarna += char('D');
        } else if (g/16 == 14) {
            hexWarna += char('E');
        } else if (g/16 == 15) {
            hexWarna += char('F');
        }

        if (g%16 < 10) {
            hexWarna += to_string(g%16);
        } else if (g%16 == 10) {
            hexWarna += char('A');
        } else if (g%16 == 11) {
            hexWarna += char('B');
        } else if (g%16 == 12) {
            hexWarna += char('C');
        } else if (g%16 == 13) {
            hexWarna += char('D');
        } else if (g%16 == 14) {
            hexWarna += char('E');
        } else if (g%16 == 15) {
            hexWarna += char('F');
        }
    
    hexWarna.substr(5, 2) = (b/16) + (b%16);
        if (b/16 < 10) {
            hexWarna += to_string(b/16);
        } else if (b/16 == 10) {
            hexWarna += char('A');
        } else if (b/16 == 11) {
            hexWarna += char('B');
        } else if (b/16 == 12) {
            hexWarna += char('C');
        } else if (b/16 == 13) {
            hexWarna += char('D');
        } else if (b/16 == 14) {
            hexWarna += char('E');
        } else if (b/16 == 15) {
            hexWarna += char('F');
        }

        if (b%16 < 10) {
            hexWarna += to_string(b%16);
        } else if (b%16 == 10) {
            hexWarna += char('A');
        } else if (b%16 == 11) {
            hexWarna += char('B');
        } else if (b%16 == 12) {
            hexWarna += char('C');
        } else if (b%16 == 13) {
            hexWarna += char('D');
        } else if (b%16 == 14) {
            hexWarna += char('E');
        } else if (b%16 == 15) {
            hexWarna += char('F');
        }
    return hexWarna;
    //return "#" + to_string(r/16) + to_string(r%16) + to_string(g/16) + to_string(g%16) + to_string(b/16) + to_string(b%16);
}


int main(){
    string hexDasarWarna, komplemenWarna, senadaKananWarna, senadaKiriWarna; 
    cout << "\nMasukkan kode hex warna dasar (contoh: #8F767D): ";
    cin >> hexDasarWarna;

    //panggil fungsi konversi kode hex dari dasar warna ke rgb
    tie(r, g, b) = hexToRGB(hexDasarWarna);

    //pisahian kode-kode hex menjadi r, g, b
    tie(rK1, gK1, bK1) = rgbSenadaKanan(r, g, b);
    tie(rK2, gK2, bK2) = rgbSenadaKiri(r, g, b);
    tie(rKom, gKom, bKom) = rgbKomplementer(r, g, b);

    //generate palet warna
    cout << "================= Palet Warna =================" << endl;
    cout << "Warna paling tua senada    : " << rgbToHex(rK1, g, b) << endl;
    cout << "Warna dasar                : " << hexDasarWarna << endl;
    cout << "Warna paling muda senada   : " << rgbToHex(rK2, g, b) << endl;
    cout << "Warna komplementer         : " << rgbToHex(rKom, gKom, bKom) << endl;
    cout << "===============================================\n" << endl;

    return 0;
    //ini semua kode yang sudah ada sebelumnya, tapi dikomentari. pgn nyoba dibikin fungsi-fungsi yang sudah dibuat di atas
    //panggil fungsi konversi hex ke rgb
    /*tie(r, g, b) = hexToRGB(hexDasarWarna);
    cout << "RGB dari warna dasar           : (" << r << ", " << g << ", " << b << ")" << endl; 
    cout << "Hex dari warna dasar           : " << hexDasarWarna << endl;
    */


    //rgb buat complementary color (nilai max rgb - rgb warna dasar)
    /*
    int rKom = 255 - r;
    int gKom = 255 - g;
    int bKom = 255 - b;
    cout << "RGB dari warna komplementer    : (" << rKom << ", " << gKom << ", " << bKom << ")" << endl;
    //konversi rgb ke hex
    string hexKomplemenWarna = rgbToHex(rKom, gKom, bKom);
    cout << "Hex dari warna komplementer    : " << hexKomplemenWarna << endl;
    */


    //rgb buat analogous color ke kanan & kiri (nilai rgb warna dasar +- 30)
    //kanan
    /*int rK1 = (r + 30 > 255) ? 255 : r + 30;
    int gK1 = (g + 30 > 255) ? 255 : g + 30; 
    int bK1 = (b + 30 > 255) ? 255 : b + 30;
    cout << "RGB dari warna senada kanan    : (" << rK1 << ", " << gK1 << ", " << bK1 << ")" << endl;
    //konversi rgb ke hex
    string hexSenadaKananWarna = rgbToHex(rK1, gK1, bK1);
    cout << "Hex dari warna senada kanan    : " << hexSenadaKananWarna << endl;
    */

    //kiri
    /*
    int rK2 = (r - 30 < 0) ? 0 : r - 30;
    int gK2 = (g - 30 < 0) ? 0 : g - 30; 
    int bK2 = (b - 30 < 0) ? 0 : b - 30;
    cout << "RGB dari warna senada kiri     : (" << rK2 << ", " << gK2 << ", " << bK2 << ")" << endl;
    //konversi rgb ke hex
    string hexSenadaKiriWarna = rgbToHex(rK2, gK2, bK2);
    cout << "Hex dari warna senada kiri     : " << hexSenadaKiriWarna << endl;
    */

}