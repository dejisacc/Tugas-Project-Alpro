#include <iostream>
using namespace std;

int main(){
    float i, n, x;
    float rerata;
    cout << "Masukkan banyaknya data: ";
    cin >> n;

    int sum=0;
    for (i=1; i<=n; i++){
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> x;
        sum = sum+x;
    }

    rerata = sum/n;
    cout << "Reratanya adalah " << rerata;
}