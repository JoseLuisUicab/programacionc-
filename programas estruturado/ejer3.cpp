/*
El programa lee una cadena de letras/palabras y posteriormente ingresas un carácter
y te dirá la cantidad de veces que se repite ese carácter porfa
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char cadena[100], caracter;
    int contador;

    cout<<"introduce tu cadena: ";
    cin.getline(cadena,100,'\n');

    cout<<"introduce el caracter: ";
    cin.get(caracter);

    for(int i = 0; cadena[i]!='\0'; i++){
    	if(cadena[i]==caracter){
				contador++;

    	}
    }
    cout<<"cantidad de veces que parece ese caracter: "<<contador;

}
