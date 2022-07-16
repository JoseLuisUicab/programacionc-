/*se quiere ingresar los pesos de los sacos de azucar y realizar un algoritmo para calcular el promedio
de los pesos ingresados terminara cuando se ingrese un peso negativo
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int pesos=0, cont=0;
    int promedio=0, suma=0;
    cout<<"ingresa los pesos";
    cin>>pesos;
    while (pesos>0){
        cout<<"ingresa los pesos";
        cin>>pesos;
        if(pesos>0){
            suma=suma+pesos;
			cont++;
        }
    }
    promedio = (suma/cont);
    cout<<"promedio de los pesos: "<<promedio;
}
