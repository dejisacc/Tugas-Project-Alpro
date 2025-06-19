#include <iostream> 
#include <cmath>
using namespace std;


tuple<int, int, int> hexToRGB(string &hexdasarWarna) {
    int r = stoi(hexdasarWarna.substr(1, 2), nullptr, 16);
    int g = stoi(hexdasarWarna.substr(3, 2), nullptr, 16);
    int b = stoi(hexdasarWarna.substr(5, 2), nullptr, 16);

    return {r, g, b};
}

tuple<int, int, int> rgbWarnaMuda(int &r, int &g, int &b){
    int r1 = r + 60;
    int g1 = g + 60;
    int b1 = b + 60;
    if (r1 > 255) r1 = 255;
    if (g1 > 255) g1 = 255;
    if (b1 > 255) b1 = 255;
    return {abs(r1), abs(g1), abs(b1)};
}

tuple<int, int, int> rgbWarnaSedang(int &r, int &g, int &b){
    int r2 = r - 60;
    int g2 = g - 60;
    int b2 = b - 60;
    if (r2 > 255) r2 = 255;
    if (g2 > 255) g2 = 255;
    if (b2 > 255) b2 = 255;
    return {abs(r2), abs(g2), abs(b2)};
}

tuple<int, int, int> rgbWarnaTua(int &r, int &g, int &b){
    int r3 = r - 90;
    int g3 = g - 90;    
    int b3 = b - 90;
    if (r3 < 0) r3 = 0;
    if (g3 < 0) g3 = 0;
    if (b3 < 0) b3 = 0;
    return {abs(r3), abs(g3), abs(b3)};
}

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
}


int main() {
    int r, g, b;
    string hexDasarWarna;
    cout << "\nMasukkan kode hex warna dasar (contoh: #8F767D): ";
    cin >> hexDasarWarna;

    //konversi kode hex ke rgb
    tie(r, g, b) = hexToRGB(hexDasarWarna);
    
    //warna muda
    int r3, g3, b3;
    tie(r3, g3, b3) = rgbWarnaMuda(r, g, b);
    string hexWarnaMuda = rgbToHex(r3, g3, b3);
    
    //warna sedang
    int r2, g2, b2; 
    tie(r2, g2, b2) = rgbWarnaSedang(r, g, b);
    string hexWarnaSedang = rgbToHex(r2, g2, b2);
    
    //warna tua
    int r1, g1, b1;
    tie(r1, g1, b1) = rgbWarnaTua(r, g, b);
    string hexWarnaTua = rgbToHex(r1, g1, b1);
    
    //generate hasil palet warna
    cout << "========================================== Palet Warna =========================================" << endl;
    cout << "RGB Warna dasar          : (" << r << ", " << g << ", " << b << ")" << endl;
    cout << "Hex Warna dasar          : " << hexDasarWarna << endl;
    cout << "RGB Warna lebih muda     : (" << r1 << ", " << g1 << ", " << b1 << ")" << endl;
    cout << "Hex Warna lebih muda     : " << hexWarnaMuda << endl;
    cout << "RGB Warna lebih sedang   : (" << r2 << ", " << g2 << ", " << b2 << ")" << endl;
    cout << "Hex Warna lebih sedang   : " << hexWarnaSedang << endl;
    cout << "RGB Warna paling tua     : (" << r3 << ", " << g3 << ", " << b3 << ")" << endl;
    cout << "Hex Warna paling tua     : " << hexWarnaTua << endl;
    cout << "================================================================================================" << endl;

}
    
