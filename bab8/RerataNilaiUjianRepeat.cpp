#include <iostream>
using namespace std;

int main(){
    float x, n, rerata;
    float sum=0, i=1; 
    cout << "Masukkan berapa banyak data yang akan dimasukkan: ";
    cin >> n;

    do {
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> x;
        sum = sum+x;
        i++;
    } while (i<=n);
      
    rerata = sum/n;
    cout << "Rerata nilai ujiannya adalah " << rerata;
    return 0;
}