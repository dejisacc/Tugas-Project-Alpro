#include <iostream>
using namespace std;    

void tukarIsi (int A[], int B[]){
    int i;
    int temp = A[i];
    A[i] = B[i];
    B[i] = temp;
}

int main(){
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {6, 7, 8, 9, 10};
    
    cout << "Sebelum ditukar:" << endl;
    cout << "A: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    cout << "B: ";
    for (int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }
    cout << endl;
    
    tukarIsi(A, B);
    
    cout << "Setelah ditukar:" << endl;
    cout << "A: ";
    for (int i = 0; i < 5; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    cout << "B: ";
    for (int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }
    cout << endl;
    
    return 0;
}