#include <iostream>
#include <climits>
using namespace std;

void HitungNilaiMin(int &x, int *min, int &n){
    x; //data bil. bulat yang dibaca dari papan ketik
    *min = INT_MAX; //int_max itu utk batasan nilai
    n=0;

    while (true){
        cout << "Masukkan nilai ke-" << n+1 << " (9999 untuk berhenti): ";
        cin >> x;

        if (x == 9999){
            break;
        } else if (x == -1){
            cout << "data tidak valid";
            continue;
        }

        if (x < *min){
            *min = x;//nilai min
        }
        n++;
    }
}

int main(){
    int x; //data
    int min; //nilai min
    int n; //pencacah

    HitungNilaiMin(x,&min,n);
    cout << "Nilai minimum dari " << n << " buah nilai tersebut adalah " << min << endl;
    return 0;
} 