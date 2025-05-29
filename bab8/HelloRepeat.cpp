#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan berapa kali kalimat akan diulang: ";
    cin >> n;

    int i=1, sum=0;
    do {
        cout << "Hello, world!\n";
        i++;
    } while (i<=n);

    return 0;
}