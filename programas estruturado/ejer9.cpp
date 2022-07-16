#include<iostream>
#include<conio.h>
#include<string.h>
#include<sstream>
#include<limits>
#include<iomanip>
using namespace std;
using std::numeric_limits;

int main(){
	int n=0, suma=0;
	cout<<"cuantos pacientes: ";
	cin>>n;
	string nombre[n];
	int edad[n], estatura[n];
	float peso[n], IMC[n],kg[n],promedio=0,m[n];

	for(int i= 0; i < n; i++) {
		cout<<"nombre: ";
		cin>>nombre[i];cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"edad: ";
		cin>>edad[i];
		suma = suma + edad[i];
		cout<<"estatura en cm: ";
		cin>>estatura[i];
		cout<<"peso en libras: ";
		cin>>peso[i];
		kg[i] =(peso[i]*(1/2.2046));
		m[i] =(estatura[i]*(1.0/100));
		IMC[i]=(peso[i]/(m[i]*m[i]));

	}
	promedio = suma/n;
	cout<<"paciente: "<<" peso: "<<" estatura: "<<" IMC: "<<endl;
	for(int i= 0; i < n; i++) {
		cout<<nombre[i]<<"     |"<<fixed<<setprecision(2)<<kg[i]<<"kg   |"<<fixed<<setprecision(2)<<m[i]<<"mts   |"<<fixed<<setprecision(2)<<IMC[i]<<endl;
	}
	cout<<"peso promedio de los pacientes: "<<promedio;

}
