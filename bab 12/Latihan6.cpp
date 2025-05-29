#include <iostream>
using namespace std;    

void tukarIsi(char A[], int n){
    cout << "Setelah ditukar:" << endl;
    cout << "A: ";
    for (int i = n - 1; i >= 0; i--){
        cout << A[i] << " ";
    }
    cout << endl;
}

int main(){ 
    int i;
    char A[5] = {'m', 'a', 'r', 'a', 'h'};
    
    cout << "Sebelum ditukar:" << endl;
    cout << "A: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    tukarIsi(A, 5);
}