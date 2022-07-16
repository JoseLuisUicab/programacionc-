/*ingresar un conjunto de personas y buscar la mayor talla de todo el grupo preguntar si desea
registrar a la sigueinte persona
*/
#include <iostream>
#include <conio.h>
#include <sstream>
#include <limits>
using namespace std;
int main()
{
    int quien = 0, mayor = 0, i = 0;
    char op;
    int per = 0, talla = 0;

    do
    {
        cout << "persona: ";
        cin >> per;
        fflush(stdin);
        cout << "talla: ";
        cin >> talla;
        fflush(stdin);
        if (talla > mayor){
            mayor = talla;
            quien = per;
        }
        cout << "deseas registrar a la otra persona: ";
        fflush(stdin);
        cin.get(op);
    } while (op == 's' || op == 'S');

    cout << "persona: " << quien << "talla: " << mayor;
}
