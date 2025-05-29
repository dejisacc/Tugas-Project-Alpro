//hitung nilai rata-rat dari arsip "data.txt"
#include <iostream>
#include <fstream>
using namespace std;

main (){
    int x; //data bilangan bulat yang dibaca dari arsip
    int i; //pencacah banyak data
    int jumlah; //pencatat jumlah data
    float rerata; //nilai rata-rata seluruh data
    ifstream Fin; //pointer ke arsip masukan

    //buka arsip masukan
    Fin.open("data2.txt");

    jumlah =  0; 
    i = 1;
    while (x != -1){
        Fin >> x;
        jumlah = jumlah+x;
        i++;
    }

    if (i != 0){
        rerata = (float) jumlah/i;
        cout << "Rata-rata = " << rerata << endl;
    }else{
        cout << "Arsip kosong \n";
    }
    
    Fin.close();
}