#include <iostream>
using namespace std;

//tentukan apakah bilangan merupakan positif, negatif, atau nol
int main(){
    int x;
    cout << "Masukkan bilangan: ";
    cin >> x;

    if (x>0){
        cout << "Bilangan " << x << " merupakan bilangan positif";
    }else{
        if(x<0){
            cout << "Bilangan " << x << " merupakan bilangan negatif";
        }else{
            if(x==0){
                cout << "Bilangan " << x << " merupakan bilangan nol";
            }
        }
    }
}