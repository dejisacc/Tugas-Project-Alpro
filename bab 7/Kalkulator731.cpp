#include <iostream>
using namespace std;

int main(){
    int op1, op2;
    char opt;
    cout << "Masukkan angka pertama, operasi, angka kedua (misal 1 + 2): ";
    cin >> op1 >> opt >> op2;

    switch (opt){
        case '+':
            cout << "Hasilnya " << op1+op2; break;
        case '-':
            cout << "Hasilnya " << op1-op2; break;    
        case '*':
            cout << "Hasilnya " << op1*op2; break;
        case '/':
            if (op2!=0){
            cout << "Hasilnya " << op1/op2;
            }else{
                cout << "Error!";
            } break;
        default:
            cout << "Operator tidak valid"; 
        return 1;  
    }
}