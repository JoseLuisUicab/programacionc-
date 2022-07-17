#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int ramdon, suma = 0, maximo = 0, minimo = 999999;
    float promedio;
    for (int i = 0; i < 10; i++) {
        ramdon = 1 + rand() % 10;
        suma += ramdon;
        if (ramdon > maximo) {
            maximo = ramdon;
        }
        else if (ramdon < minimo) {
            minimo = ramdon;
        }

    }
    promedio = suma / 10;
    cout.precision(2);
    cout << "suma de los elementos: " << suma << endl;
    cout << "numero maximo: " << maximo << endl;
    cout << "nuemro minimo: " << minimo << endl;

    cout << "proemdio: " << promedio << endl;
}
