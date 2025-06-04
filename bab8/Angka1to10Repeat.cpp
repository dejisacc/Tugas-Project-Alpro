#include <iostream>
using namespace std;

int main(){
    int i=1, n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;

    do {
        cout << i << " ";
        i++;
    } while (i<=n);
  
    return 0;
}