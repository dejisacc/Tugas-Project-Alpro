#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

// Your existing functions (I'll assume they're correct)
tuple<int, int, int> hexToRGB(string &hexdasarWarna) {
    int r = stoi(hexdasarWarna.substr(1, 2), nullptr, 16);
    int g = stoi(hexdasarWarna.substr(3, 2), nullptr, 16);
    int b = stoi(hexdasarWarna.substr(5, 2), nullptr, 16);
    return {r, g, b};
}

tuple<float, float, float> rgbToHSL (int &r, int &g, int &b){
    float fr = (float)r/255.0;
    float fg = (float)g/255.0;
    float fb = (float)b/255.0;

    float maxRGB, minRGB, delta, h, s, l;
    maxRGB = max(fr, max(fg, fb));
    minRGB = min(fr, min(fg, fb));
    delta = maxRGB - minRGB;

    l = (maxRGB + minRGB) / 2;
    
    if (delta == 0) {
        s = 0;
    } else if (l >= 0.5 && l < 1.0) {
        s = delta / (2.0 - maxRGB - minRGB);
    } else {
        s = delta / (maxRGB + minRGB);
    }

    if (delta == 0) {
        h = 0;
    } else if (maxRGB == fr) {
        h = (fg - fb) / delta;
        if (h < 0) h += 6;
    } else if (maxRGB == fg) {
        h = 2 + (fb - fr) / delta;
    } else {
        h = 4 + (fr - fg) / delta;
    }
    h = h / 6;

    return {h, s, l}; 
}

// Debug version of your hueToRGB function
tuple<int, int, int> hueToRGB (float h, float s, float l){
    cout << "=== DEBUG hueToRGB ===" << endl;
    cout << "Input HSL: H=" << h*360 << "°, S=" << s*100 << "%, L=" << l*100 << "%" << endl;
    
    float r, g, b;
    if (s == 0) {
        r = g = b = l;
        cout << "Grayscale case" << endl;
    } else {
        float q = (l < 0.5) ? l * (1 + s) : l + s - l * s;
        float p = 2 * l - q;
        cout << "q=" << q << ", p=" << p << endl;
        
        float t[3] = {h + 1.0f/3.0f, h, h - 1.0f/3.0f};
        cout << "t values: " << t[0] << ", " << t[1] << ", " << t[2] << endl;

        for (int i = 0; i < 3; i++) {
            if (t[i] < 0) t[i] += 1;
            if (t[i] > 1) t[i] -= 1;

            if (t[i] < 1.0/6.0) {
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
        cout << "Final RGB floats: " << r << ", " << g << ", " << b << endl;
    }
    
    int rint = static_cast<int>(round(r * 255));
    int gint = static_cast<int>(round(g * 255));
    int bint = static_cast<int>(round(b * 255));
    
    cout << "Final RGB ints: " << rint << ", " << gint << ", " << bint << endl;
    return {rint, gint, bint};
}

// Corrected RGB to Hex function
string rgbToHex(int r, int g, int b) {
    auto toHex = [](int value) -> string {
        if (value < 0) value = 0;
        if (value > 255) value = 255;
        
        string result = "";
        int first = value / 16;
        int second = value % 16;
        
        if (first < 10) {
            result += to_string(first);
        } else {
            result += char('A' + first - 10);
        }
        
        if (second < 10) {
            result += to_string(second);
        } else {
            result += char('A' + second - 10);
        }
        
        return result;
    };
    
    return "#" + toHex(r) + toHex(g) + toHex(b);
}

tuple<float, float, float> rgbSenada (float &h, float s, float l, bool kanan) {
    float hueShift;
    if (s < 0.3) {
        hueShift = 1.0/4.5; // 80 degrees
        cout << "Using 80-degree shift for low saturation" << endl;
    } else if (s < 0.5) {
        hueShift = 1.0/8.0; // 45 degrees
    } else {
        hueShift = 1.0/12.0; // 30 degrees
    }
    
    float h1;
    if (kanan){
        h1 = h + hueShift;
        if (h1 >= 1.0) h1 -= 1.0;
    }else{
        h1 = h - hueShift;
        if (h1 < 0) h1 += 1.0;
    }
    
    cout << "Hue shift: " << hueShift*360 << " degrees" << endl;
    cout << "Original hue: " << h*360 << "°, New hue: " << h1*360 << "°" << endl;
    
    return {h1, s, l};
}

int main(){
    string hexDasarWarna = "#DAFBF2";
    cout << "Testing color: " << hexDasarWarna << endl;
    cout << "Expected result: #DAE3FB" << endl << endl;
    
    // Step 1: Hex to RGB
    int r, g, b;
    tie(r, g, b) = hexToRGB(hexDasarWarna);
    cout << "Step 1 - RGB: " << r << ", " << g << ", " << b << endl << endl;
    
    // Step 2: RGB to HSL
    float h, s, l;
    tie(h, s, l) = rgbToHSL(r, g, b);
    cout << "Step 2 - HSL: H=" << h*360 << "°, S=" << s*100 << "%, L=" << l*100 << "%" << endl << endl;
    
    // Step 3: Apply hue shift
    float h1;
    tie(h1, s, l) = rgbSenada(h, s, l, true);
    cout << "Step 3 - After shift: H=" << h1*360 << "°, S=" << s*100 << "%, L=" << l*100 << "%" << endl << endl;
    
    // Step 4: HSL back to RGB
    int rint, gint, bint;
    tie(rint, gint, bint) = hueToRGB(h1, s, l);
    cout << "Step 4 - New RGB: " << rint << ", " << gint << ", " << bint << endl << endl;
    
    // Step 5: RGB to Hex
    string result = rgbToHex(rint, gint, bint);
    cout << "Step 5 - Final result: " << result << endl;
    cout << "Expected: #DAE3FB" << endl;
    cout << "Match: " << (result == "#DAE3FB" ? "YES" : "NO") << endl;
    
    return 0;
}