#include <iostream>
using namespace std;

int main(){
    float n, x;
    float rerata;
    cout << "Masukkan banyaknya data: ";
    cin >> n;

    float sum=0, i=1;
    while (i<=n){
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> x;
        sum = sum+x;
        i++;
    }

    rerata = sum/n;
    cout << "Reratanya adalah " << rerata;
    return 0;
}