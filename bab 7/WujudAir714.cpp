#include <iostream>
using namespace std;

//tentukan apakah wujud zat (air) itu padat, cair, atau gas
int main(){
    float T;
    cout << "Masukkan suhu air: ";
    cin >> T;

    if (T<=0){                                   //kasus 1
        cout << "Wujud airnya padat";
    }else{
        if(T>0 && T<100){                        //kasus 2
            cout << "Wujud airnya cair";         
        }else{
            if(T>=100){                          //kasus 3
                cout << "Wujud airnya gas atau uap";  
            }
        }
    }
}