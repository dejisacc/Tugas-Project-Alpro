#include <iostream>
using namespace std;

int main(){
    int x[6];
    int i;
    for (i=1; i<=6; i++){
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> x[i];
    }

    for (i=1; i<+6; i++){
        cout << "Data ke-" << i << ": " << x[i] << endl;
    }

    float jumlah = 0;
    for (i=1; i<=6; i++){
        jumlah = jumlah + x[i];
    }

    float u = jumlah/6;
    cout << "Nilai rerata: " << u << endl;
}