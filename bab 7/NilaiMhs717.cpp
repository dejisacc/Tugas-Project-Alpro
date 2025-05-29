#include <iostream>
using namespace std;

/*buatlah algoritma yang membaca nama mahasiswa dan nilai ujiannya lalu tentukan indeks nilainya dan cetak
nama, nilai, serta indeks tsb*/
int main(){
    string nama;
    double nilai;
    char indeks;

    cout << "Masukkan nama mahasiswa/i: ";
    cin >> nama;
    cout << "Masukkan nilai mahasiswa/i: ";
    cin >> nilai;
    
    if(nilai>=80){
        indeks = 'A';
    }else{
        if(nilai>=70 && nilai<80){
            indeks = 'B';
        }else{
            if(nilai>=55 && nilai<70){
                indeks = 'C';
            }else{
                if (nilai>=40 && nilai<55){
                    indeks = 'D';
                }else{
                    indeks = 'E';
                }
            }
        }
    }
    cout << "Nama: " << nama << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Indeks: " << indeks << endl;
}