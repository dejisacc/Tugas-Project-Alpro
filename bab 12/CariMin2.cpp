#include <iostream>
using namespace std;

void cariMin2(int A[], int n, int &min){
    int i; 
    min = A[0];
    for (i = 1; i < n; i++){
        if (A[i] < min){
            min = A[i];
        }
    }
}

int main(){
    int A[] = {1, 2, 3, -5, 4, 5};
    int min;
    int n = sizeof(A) / sizeof(A[0]);
    cariMin2(A, n, min);
    cout << "Nilai minimum: " << min << endl;
    return 0;
}