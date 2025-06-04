#include <iostream>
using namespace std;

int main(){
    int n; //jumlah siswa
    int m; //jumlah mapel
    string nama; 
    double nilai;
    double jumlah;
    double rerata ;
    int i, j;

    cout << "Masukkan jumlah siswa: ";
    cin >> n;
    cout << "Masukkan jumlah mata pelajaran: ";
    cin >> m;

    i=1;  
    while (i <= n){
        cout << "Masukkan nama siswa: ";
        cin >> nama;

        j=1; 
        jumlah=0;
        while (j <= m){
            cout << "Masukkan nilai: ";
            cin >> nilai;
            jumlah += nilai;
            j++;
        }
        i++;
        rerata = jumlah/m;
        cout << "Rerata: " << rerata << endl;
    }
    
}