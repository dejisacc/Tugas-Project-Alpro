#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
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

//minRGB, maxRGB; variabel untuk menyimpan nilai rgb tertinggi dan terendah
//delta; variabel untuk menyimpan selisih antara nilai rgb tertinggi dan terendah
tuple<float, float, float> rgbToHSL (int &r, int &g, int &b){
    //membagi nilai rgb ke nilai normal (0.0-1.0) utk mencari hue, saturation, dan lightness
    float fr = (float)r/255.0;
    float fg = (float)g/255.0;
    float fb = (float)b/255.0;

    //mengidentifikasi nilai rgb tertinggi dan terendah, dan menghitung delta
    float maxRGB, minRGB, delta, h, s, l;
    maxRGB = max(fr, max(fg, fb));
    minRGB = min(fr, min(fg, fb));
    delta = maxRGB - minRGB;

    //kalkulasi lightness 
    l = (maxRGB + minRGB) / 2;
    
    //kalkulasi saturation
    if (delta == 0) {
        s = 0; //saturation tidak terdefinisi
    } else if (l >= 0.5) {
        s = delta / (2.0 - maxRGB - minRGB);
    } else {
        s = delta / (maxRGB + minRGB);
    }

    //kalkulasi hue
    if (delta == 0) {
        h = 0; //hue tidak terdefinisi
    } else if (maxRGB == fr) {
        h = (fg < fb ? 6 : 0) + (fg - fb) / delta; //0 adalah hue section untuk merah, mod 1 untuk memastikan nilai tetap dalam rentang 0-1
    } else if (maxRGB == g) {
        h = 2 + (fb - fr) / delta; //2 adalah hue section untuk hijau
    } else {
        h = 4 + (fr - fg) / delta; //4 adalah hue section untuk biru
    }
    h = h / 6; //memastikan nilai hue tetap dalam rentang 0-1

    return {h, s, l}; 
}

//fungsi untuk mengkonversi hue ke rgb
tuple<int, int, int> hueToRGB (float h, float s, float l){
    float r, g, b;
    if (s == 0) {
        r = g = b = l; //warna abu-abu
    } else {
        float q = (l < 0.5) ? l * (1 + s) : l + s - l * s;
        float p = 2 * l - q;
        float t[3] = {h + 1.0/3.0, h, h - 1.0/3.0}; //t adalah array untuk menyimpan nilai hue r, g, b

        for (int i = 0; i < 3; i++) {
            if (t[i] < 0) t[i] += 1;
            if (t[i] > 1) t[i] -= 1;

            if (t[i] < 1.0/6) {
                t[i] = p + (q - p) * 6.0 * t[i];
            } else if (t[i] < 1.0/2.0) {
                t[i] = q;
            } else if (t[i] < 2.0/3.0) {
                t[i] = p + (q - p) * (2.0/3.0 - t[i]) * 6.0;
            } else {
                t[i] = p;
            }
        }
        r = t[0];
        g = t[1];
        b = t[2];
    }
    int rint = static_cast<int>(r * 255); //mengkonversi nilai r ke rentang 0-255
    int gint = static_cast<int>(g * 255); //mengkonversi nilai g ke rentang 0-255
    int bint = static_cast<int>(b * 255); //mengkonversi nilai b ke rentang 0-255
    return {rint, gint, bint}; //mengembalikan nilai rgb dalam rentang 0-255
}

//h1; variabel untuk menyimpan nilai hue yg dimodifikasi 30 derajat
tuple<float, float, float> rgbSenada (float &h, float s, float l, bool kanan) {
    //mengurangi hue dengan 30 derajat (1/12 dari lingkaran penuh 360 derajat)
    float h1;
    if (kanan){
        h1 = h + 1.0/12.0;
        if (h1 >= 1.0) h1 = h - 1.0; //memastikan nilai hue tetap dalam rentang 0-1
    }else{
        h1 = h - 1.0/12.0;
        if (h1 < 0) h1 = h + 1.0; //memastikan nilai hue tetap dalam rentang 0-1
    }
    
    return {h1, s, l};
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
}


int main(){
    string hexDasarWarna, komplemenWarna, senadaKananWarna, senadaKiriWarna; 
    cout << "\nMasukkan kode hex warna dasar (contoh: #8F767D): ";
    cin >> hexDasarWarna;
    
//warna senada kanan
    //panggil fungsi konversi kode hex dari dasar warna ke rgb
    tie(r, g, b) = hexToRGB(hexDasarWarna);
    //cout << r << " " << g << " " << b << endl; //tampilkan nilai rgb dari warna dasar utk periksa

    //panggil fungsi konversi rgb ke hsl
    float h, s, l;
    tie(h, s, l) = rgbToHSL(r, g, b);
    //cout << h << " " << s << " " << l << endl;

    //masukkan nilai h, s, l ke dalam fungsi rgbSenada
    float h1;
    tie(h1, s, l) = rgbSenada(h, s, l, true); //true untuk kanan (+30 derajat)
    cout << h1 << " " << s << " " << l << endl;    
    int rint, gint, bint; //variabel untuk menyimpan rgb warna senada kanan
    tie(rint, gint, bint) = hueToRGB(h1, s, l); //konversi hsl ke rgb untuk warna senada kanan
    //cout << h1 << " " << s << " " << l << endl; ini buat periksa nilainya berubah ap gk
    //cout << rint << " " << gint << " " << bint << endl; ini juga buat periksa doang
    senadaKananWarna = rgbToHex(rint, gint, bint); //konversi rgb ke hex untuk warna senada kanan

//warna senada kiri
    //panggil fungsi konversi hex ke rgb utk reset rgb balik lagi ke rgb warna dasar
    tie(r, g, b) = hexToRGB(hexDasarWarna);
    //cout << r << " " << g << " " << b << endl; //tampilkan nilai rgb dari warna dasar utk periksa
    
    //panggil fungsi konversi rgb yg direset td ke hsl
    tie(h, s, l) = rgbToHSL(r, g, b);
    //cout << r << " " << g << " " << b << endl; ini utk periksa
    //cout << h << " " << s << " " << l << endl; ini utk periksa nilainy brubah ap gk
    
    //masukkan nilai h, s, l ke dalam fungsi rgbSenada
    tie(h1, s, l) = rgbSenada(h, s, l, false); //false untuk kiri   
    //cout << h1 << " " << s << " " << l << endl; ini utk periksa
    tie(rint, gint, bint) = hueToRGB(h1, s, l);
    //cout << h1 << " " << s << " " << l << endl; ini utk periksa
    //cout << rint << " " << bint << " " << gint << endl; ini utk periksa
    senadaKiriWarna = rgbToHex(rint, gint, bint);

//warna komplemen
    //panggil fungsi konversi hex ke rgb utk reset value ke rgb warna dasar
    tie(r, g, b) = hexToRGB(hexDasarWarna);

    //panggil fungsi utk menghitung kode warna komplemen
    tie(rKom, gKom, bKom) = rgbKomplementer(r, g, b);
    //panggil fungsi konversi rgb ke hex
    komplemenWarna = rgbToHex(rKom, gKom, bKom); //konversi rgb ke hex untuk warna komplementer

//generate palet warna
    cout << "================= Palet Warna =================" << endl;
    cout << "Warna senada kanan         : " << senadaKananWarna << endl;
    cout << "Warna dasar                : " << hexDasarWarna << endl;
    cout << "Warna senada kiri          : " << senadaKiriWarna << endl;
    cout << "Warna komplementer         : " << komplemenWarna<< endl;
    cout << "===============================================\n" << endl;

    return 0;
}