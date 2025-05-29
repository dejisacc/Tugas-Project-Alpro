#include <iostream>
using namespace std;

void NilaiMaksimum(float a, float b, float *max){
    if (a>b){
        *max = a;
    }else{
        *max = b;
    }
}

int main(){
    float a; //nilai pertama
    float b; //nilai kedua
    float max; //nilai maksimum
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Masukkan nilai kedua: ";
    cin >> b;
    NilaiMaksimum(a,b,&max);
    cout << "Nilai maksimumnya adalah " << max << endl;
} 