#include <iostream>
using namespace std;

int main(){
    int n;
    int fak; //nilai faktorial bilangan n
    int i;
    
    cout << "Masukkan nilai faktorial: ";
    cin >> n;

    fak = 1;
    for (i=1; i<=n; i++){
        fak *= i;
    }
    
    cout << "Nilai faktorial dari bilangan " << n << " adalah " << fak;
    return 0;
}