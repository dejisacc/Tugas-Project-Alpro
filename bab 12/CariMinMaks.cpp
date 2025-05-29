#include <iostream>
using namespace std;

void cariMinMaks(int A[], int n, int &min, int &maks){
    int i; 
    min = A[0];
    maks = A[0];
    for (i = 1; i < n; i++){
        if (A[i] < min){
            min = A[i];
        }
        if (A[i] > maks){
            maks = A[i];
        }
    }
}

int main(){
    int A[] = {3, 5, 1, 8, -2, 10, -18};
    int n = sizeof(A) / sizeof(A[0]);   
    int min, maks;
    cariMinMaks(A, n, min, maks);
    cout << "Nilai minimum: " << min << endl;
    cout << "Nilai maksimum: " << maks << endl;
    return 0;
}