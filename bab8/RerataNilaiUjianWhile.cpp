#include <iostream>
using namespace std;

int main(){
    float x, rerata;
    float sum=0, i=0;     
    while (x != -1){
        i++;
        sum = sum+x;
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> x;
    }

    if (i != 0){
        rerata = sum/i;
    }else{
        cout << "Tidak ada data nilai ujian yang dimasukkan";
    }
    rerata = sum/(i-1);
    cout << "Reratanya adalah " << rerata;
    return 0;
}