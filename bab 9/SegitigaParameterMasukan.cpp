#include <iostream>
using namespace std;

int a;//alas
int t;//tinggi
void HitungLuas(double a, double t){
    double L; //dalam cm  
    L = a*t/2.0;
    cout << "Luas segitiga dengan alas " << a << " cm dan tinggi " << t << " adalah " << L << " cm^2\n";
}

main(){
    cout << "Mulai menghitung luas segitiga...\n";
    cout << "Masukkan alas (cm): ";
    cin >> a;
    cout << "Masukkan tinggi (cm): ";
    cin >> t;
    HitungLuas(a,t);
    cout << "\nProgram selesai";
} 