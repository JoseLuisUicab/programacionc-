#include<iostream>
#include <cstdlib>
#include<conio.h>
#include<math.h>
using namespace std;
int factorial(int num){
	int fac=1;
	for(int i = 1; i <=num; i++) {
		fac*=i;
	}
	return fac;
}
double raizcuadrada(double num){
	double raiz;
	raiz = sqrt(num);
	return raiz;
}
double raizcubica(double num){
	double raizcu =pow(num,1/3);
	return raizcu;
}

int elevar(int num, int potencia){
	int pot ;
	pot = pow(num,potencia);
	return pot;
}
int main(){
	int opcion=0,base,poten,numbe;
	double numero;

	do{
cout<<endl;

	cout<<"\t"<<"******menu*******"<<endl;
	cout<<"\t"<<"1.- factorial"<<endl;
	cout<<"\t"<<"2.- raiz cuadrada"<<endl;
	cout<<"\t"<<"3.- raiz cubica"<<endl;
	cout<<"\t"<<"4.- potencia"<<endl;
	cout<<"\t"<<"5.- salir "<<endl;
	cout<<"\t"<<"seleccionar opcion: "<<endl;
	cin>>opcion;
	system("cls");
		switch (opcion){
	case 1:
		cout<<"introduce un numero: ";
		cin>>numbe;

		cout<<"el factorial del numero es: "<<factorial(numbe);
		break;

		case 2:
		cout<<"introduce un numero: ";
		cin>>numero;
		cout<<"Raiz cuadrada: "<<raizcuadrada(numero);
		break;

		case 3:
			cout<<"introduce un numero: ";
		cin>>numero;
		cout<<"Raiz cubica: "<<raizcuadrada(numero);
		break;

		case 4:
		cout<<"introduce la base: ";
		cin>>numbe;
		cout<<"introduce la potencia: ";
		cin>>poten;
		cout<<"potencia del"<<numbe<< "es: "<<elevar(numbe,poten);
		break;
		default:

cout<<"Saliendo del programa..........";
			break;
	}

} while (opcion!=5);



return 0;
}
