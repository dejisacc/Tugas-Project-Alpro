#include <iostream>
using namespace std;

struct Jam{
    int hh, mm, ss;
};

void JamBerikutnyaVer2(Jam *J){
    int TotalDetik, SisaDetik;
    if (J->ss + 1 < 60){
        J->ss += 1;
    }else {
        J->ss = 0;
        if (J->mm + 1 < 60){
            J->mm += 1;
        }else {
            J->mm = 0;
            if(J->hh + 1 < 24){
                J->hh += 1;
            }else{
                J->hh = 0;
            }
        }
    }
}

int main(){
    Jam J;
    char titikDua;
    cout << "Masukkan jam (hh:mm:ss) : ";
    cin >> J.hh >> titikDua >> J.mm >> titikDua >> J.ss;

    JamBerikutnyaVer2(&J);
    cout << "Jam setelah ditambah 1 detik: " << J.hh << titikDua << J.mm << titikDua << J.ss << endl;
    return 0;
}