#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,D,x1,x2; 
    char comma;
    cout << "Masukkkan koefisien-koefisien persamaan kuadrat (a, b, c): ";
    cin >> a >> comma >> b >> comma >> c;

    D = b*b - 4*a*c;
    if (D<0){
        cout << "Akar-akr persamaan kudrat imajiner!";
    }else{
        if (D>0){
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
        }else{
            x1 = (-b + sqrt(D))/(2*a);
            x2 = x1;
        }
    }
    cout << "Akar-akar kuadratnya adalah " << x1 << " dan " << x2;
}