#include <iostream>
using namespace std;

struct Jam{
    int hh, mm, ss;
};

void JamBerikutnya(Jam *J){
    int TotalDetik = J->hh*3600 + J->mm*60 + J->ss;
    TotalDetik += 1;

    J->hh = TotalDetik/3600;
    int SisaDetik = TotalDetik%3600;
    J->mm = SisaDetik/60;
    J->ss = SisaDetik%60;
}

int main(){
    char titikDua;
    Jam J;
    cout << "Masukkan jam (hh:mm:ss) : ";
    cin >> J.hh >> titikDua >> J.mm >> titikDua >> J.ss;

    JamBerikutnya(&J);
    cout << "Jam setelah ditambah 1 detik: " << J.hh << titikDua << J.mm << titikDua << J.ss << endl;
    
}