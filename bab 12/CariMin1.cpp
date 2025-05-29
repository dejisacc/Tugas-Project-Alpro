#include <iostream> 
using namespace std;

void cariMin1(int A[], int n, int &min){
    int i; 
    min = 9999; //nilai min sementara
    for (i=0; i < n; i++){
        if (A[i] < min){
            min = A[i];
        }
    }
    cout << "Elemen terkecil: " << min << endl;
}
int main(){
    int A[] = {17, 5, 0, 88, 11};
    int min;
    int n = sizeof(A) / sizeof(A[0]);
    cariMin1(A, n, min);
    
    return 0;
}