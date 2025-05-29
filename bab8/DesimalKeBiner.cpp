#include <iostream>
using namespace std;

int main(){
    int x, sisa;
    string biner; //string yang menampung biner

    cout << "Masukkan bilangan desimal (>=0): ";
    cin >> x;
    biner = "";
    if (x == 0){
        biner = "0";
    }else{
        do {
            sisa = x % 2;
            x /= 2;
            switch (sisa){
                case 0:
                    biner = '0' + biner; break;
                case 1: 
                    biner = '1' + biner; break;        
            }
        } while (x!=0);
    
    } 
    cout << "Bilangan binernya: " << biner;
    return 0;
}