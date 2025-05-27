#include <iostream>
#include <tuple>
using namespace std;

//functions2
tuple <int, int, int> hexkeRGB(hexDasarWarna){
    
}
int main(){
    string dasarWarna, komplemenWarna, senadaKananWarna, senadaKiriWarna; 
    cout << "Masukkan kode hex warna dasar (contoh: #8f767d): ";
    cin >> hexDasarWarna;

    //panggil fungsi konversi hex ke rgb
    //panggil fungsi kalkulasi rgb buat complementary color (nilai max rgb - rgb warna dasar)
    //panggil fungsi kalkulasi rgb buat analogous color ke kanan & kiri (nilai rgb warna dasar +- 30)
    //panggil fungsi konversi rgb ke hex

    cout << "Warna dasar: " << dasarWarna << endl;
    cout << "Warna komplementer: " << komplemenWarna << endl;
    cout << "Warna senada 1: " << senadaKananWarna << endl;
    cout << "Warna senada 2: " << senadaKiriWarna << endl;
}
