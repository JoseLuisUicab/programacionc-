#include<iostream>
#include<conio.h>
using namespace std;
struct persona{
    char nombre[30];
    int edad;
    int peso;
    double estatura;
    double IMC;
} persona1;
int main(){
    cout<<"nombre de la persona: ";
    cin.getline(persona1.nombre,30);
    cout<<"edad de la persona: ";
    cin>>persona1.edad;
    cout<<"peso de la persona: ";
    cin>>persona1.peso;
    cout<<"estatura de la persona: ";
    cin>>persona1.estatura;
    persona1.IMC = (persona1.peso/(persona1.estatura*persona1.estatura));
    cout<<"Indice de masa corporal de la persona: "<<persona1.IMC;

}
