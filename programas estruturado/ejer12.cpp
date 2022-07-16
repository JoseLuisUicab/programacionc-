/* en una competencia de salto largo se registran las distancias de todos los competidores
realizar un programa que calcule el salto promedio de todos los competidores y el nombre del
deportista que gano la competencia incluya ¿desea registrar otro competidor?
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int com=0, mayor=0;
    int compe=0,distancia=0;
    char op;

    do {
        cout<<"competidor: ";
        cin>>compe;
        fflush(stdin);
        cout<<"distancia: ";
        cin>>distancia;
        fflush(stdin);
        if(distancia> mayor) {
            mayor = distancia;
            com = compe;

        }
        cout<<"deseas registrar a otro competidor ";
        fflush(stdin);
        cin.get(op);
    }
    while (op=='s' || op=='S');

    cout<<"persona: "<<com<<"talla: "<<mayor;

}
