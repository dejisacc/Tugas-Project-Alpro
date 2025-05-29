#include <iostream>
using namespace std;

/*ubahlah algoritma menampilkan suatu waktu ditambah 1 dtik dgn cara analisis kasus*/
struct Jam{
    int hh, mm, ss;
};

int main() {
    Jam J;
    char titikDua;
    cout << "Masukkan jam (hh:mm:ss) : ";
    cin >> J.hh >> titikDua >> J.mm >> titikDua >> J.ss;

    if (J.ss+1<60){
        J.ss = J.ss+1;
    }else{
        J.ss = 00;
        if (J.mm+1<60){
            J.mm = J.mm+1;
        }else{
            J.mm = 00;
            if (J.hh+1<24){
                J.hh = J.hh+1;
            }else{
                J.hh = 00;
            }
        }
    }
    cout << "Jam setelah ditambah 1 detik: " << J.hh << titikDua << J.mm << titikDua << J.ss << endl;

}