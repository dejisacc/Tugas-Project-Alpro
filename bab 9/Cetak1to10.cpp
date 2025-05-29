#include <iostream>
using namespace std;

void inc(int *x){
    *x += 1;
}

int main(){
    int x = 1;
    do {
        cout << x << " ";
        inc(&x);
    } while (x<=10);
}