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

//fungsi konversi rgb ke hex
string rgbToHex(int r, int g, int b) {
    
}


int main(){
    string hexDasarWarna, komplemenWarna, senadaKananWarna, senadaKiriWarna; 
    cout << "Masukkan kode hex warna dasar (contoh: #8f767d): ";
    cin >> hexDasarWarna;

    cout << "\n================= Palet Warna =================" << endl;
    //panggil fungsi konversi hex ke rgb
    tie(r, g, b) = hexToRGB(hexDasarWarna);
    cout << "RGB dari warna dasar           : (" << r << ", " << g << ", " << b << ")" << endl; 

    //rgb buat complementary color (nilai max rgb - rgb warna dasar)
    int rKom = 255 - r;
    int gKom = 255 - g;
    int bKom = 255 - b;
    cout << "RGB dari warna komplementer    : (" << rKom << ", " << gKom << ", " << bKom << ")" << endl;
    
    //rgb buat analogous color ke kanan & kiri (nilai rgb warna dasar +- 30)
    //kanan
    int rK1 = (r + 30 > 255) ? 255 : r + 30;
    int gK1 = (g + 30 > 255) ? 255 : g + 30; 
    int bK1 = (b + 30 > 255) ? 255 : b + 30;
    cout << "RGB dari warna senada kanan    : (" << rK1 << ", " << gK1 << ", " << bK1 << ")" << endl;

    //kiri
    int rK2 = (r - 30 < 0) ? 0 : r - 30;
    int gK2 = (g - 30 < 0) ? 0 : g - 30; 
    int bK2 = (b - 30 < 0) ? 0 : b - 30;
    cout << "RGB dari warna senada kiri     : (" << rK2 << ", " << gK2 << ", " << bK2 << ")" << endl;
    
    /* 
    //panggil fungsi konversi rgb ke hex
    */
    return 0;
}