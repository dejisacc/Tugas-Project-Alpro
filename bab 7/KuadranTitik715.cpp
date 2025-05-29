#include <iostream>
using namespace std;

/*buatlah algoritma yang membaca sebuah titik P(x,y) di bid koordinat, lalu menentukan di kuadran mana
letak titik tsb*/
struct titik {
    double x, y;
};

int main(){
    titik P;
    char comma;
    cout << "Masukkan titik koordinat (x,y): ";
    cin >> P.x >> comma >> P.y;

    if (P.x>0 && P.y>0){                                   
        cout << "Titik berada di kuadran I";
    }else{
        if(P.x<0 && P.y>0){                  
            cout << "Titik berada di kuadran II";     
        }else{
            if(P.x<0 && P.y<0){                          
                cout << "Titik berada di kuadran III";   
            }else{
                if(P.x>0 && P.y<0){
                    cout << "Titik berada di kuadran IV";   
                }else{
                    cout << "Titik tidak berada di kuadran manapun";   
                }
            }
        }
    }
}