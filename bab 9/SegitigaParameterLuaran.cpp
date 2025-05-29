#include <iostream>
using namespace std;

void HitungLuas(float a, float t, float *L){
    *L = a*t/2.0;
}

int main(){
    float a;//alas
    float t;//tinggi
    float L;//luas
    cout << "Mulai menghitung luas segitiga...\n";
    cout << "Masukkan alas (cm): ";
    cin >> a;
    cout << "Masukkan tinggi (cm): ";
    cin >> t;
    HitungLuas(a,t,&L);
    cout << "Luas segitiga dengan alas " << a << " cm dan tinggi " << t << " adalah " << L << " cm^2\n";
    cout << "\nProgram selesai";
} 