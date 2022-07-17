/*
El programa lee una cadena de letras/palabras y posteriormente ingresas un car�cter
y te dir� la cantidad de veces que se repite ese car�cter porfa
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char cadena[100], caracter;
    int contador;

    cout << "introduce tu cadena: ";
    cin.getline(cadena, 100, '\n');

    cout << "introduce el caracter: ";
    cin.get(caracter);

    for (int i = 0; cadena[i] != '\0'; i++){
        if (cadena[i] == caracter){
            contador++;
        }
    }
    if (contador == 0){
        cout << "ese caracter no existe en la cadena" << endl;
    }
    
    cout << "cantidad de veces que parece ese caracter: " << contador;
}
