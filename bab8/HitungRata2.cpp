//hitung nilai rata-rat dari arsip "data.txt"
#include <iostream>
#include <fstream>
using namespace std;

main (){
    int n; //banyak data
    int x; //data bilangan bulat yang dibaca dari arsip
    int i; //pencacah banyak data
    int sum; //pencatat jumlah data
    float rerata; //nilai rata-rata seluruh data
    ifstream Fin; //pointer ke arsip masukan

    //buka arsip masukan
    Fin.open("data.txt");

    Fin >> n; //baca banyaknya data
    sum =  0; 
    i = 1;
    while (i <= n){
        Fin >> x;
        sum = sum+x;
        i++;
    }

    rerata = (float) sum/n;
    cout << "Rata-rata = " << rerata << endl;
    Fin.close();
}