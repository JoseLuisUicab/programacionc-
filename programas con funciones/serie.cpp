/* elabare un programa que lea un numero entero N y
calcule la suma de la siguiente serie
X = 1^1+2^2+3^3+4^4............N^N
*/
#include<iostream>
#include <math.h>
using namespace std;
int serie(int N) {
    int exponente=1,suma;
    for(int i= 1; i <=N; i++) {
        suma = suma + pow(i,exponente);
        exponente++;
    }
    return suma;
}
int main() {
    int n;
    cout<<"ingresa un numero: ";
    cin>>n;

    cout<<"la suma de la serie es: "<<serie(n);

}
