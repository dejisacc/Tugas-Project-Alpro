#include <iostream>
using namespace std;

int n; //banyaknya segitiga
int i;

void HitungLuas(){
    double alas, tinggi; //dalam cm
    double L; //dalam cm
    cout << "Masukkan alas (cm): ";
    cin >> alas;
    cout << "Masukkan tinggi (cm): ";
    cin >> tinggi;
    
    L = alas*tinggi/2.0;
    cout << "Luas segitiga dengan alas " << alas << " cm dan tinggi " << tinggi << " adalah " << L << " cm^2\n";
}

main(){
    cout << "Mulai menghitung luas n buah segitiga...\n";
    cout << "Masukkan banyaknya segitiga: ";
    cin >> n;
    for (i=1; i<=n; i++){
        HitungLuas();
    }
    cout << "\nProgram selesai";
} 