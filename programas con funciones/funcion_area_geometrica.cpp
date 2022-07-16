
#include<iostream>
#include<conio.h>
using namespace std;
int menu(int opcion){
    cout<<"*******Menu*********"<<endl;
    cout<<"1. area circulo"<<endl;
    cout<<"2. area rectangulo"<<endl;
    cout<<"3. area triangulo"<<endl;
    cout<<"4. salir"<<endl;
    cout<<"selccioanr opcion: ";
    cin>>opcion;
    return opcion;
}
double circulo(double radio){
    double area = (3.1416)*(radio*radio);
    return area;
}
double rectangulo(double b, double a){
    double area = b*a;
    return area;
}
double triangulo(double b, double a){
    double area = (b*a/2);
    return area;
}
int main(){
    double r,h,b;
    int opc;
    switch (menu(opc)){
    case 1:
        cout<<"introduce el radio del circulo: ";
        cin>>r;
        cout<<"el area del circulo es: "<<circulo(r);
        break;

        case 2:
        cout<<"base: ";
        cin>>b;
        cout<<"aLtura";
        cin>>h;
        cout<<"area del rectangulo: "<<rectangulo(b,h);
        break;

    case 3:
		cout<<"base: ";
        cin>>b;
        cout<<"aLtura";
        cin>>h;
        cout<<"area del triangulo: "<<triangulo(b,h);
        break;

	default:
		cout<<"saliendo del programa..........";
		break;
    }



}
