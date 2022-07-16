/*en una eleccion reciente hubo 4 candidatos con identificacion1,2,3,4.
se debe encontrar mediante un programa el numero de votos correspondiente
a cada candidato y el porcentaje que obtuvo respecto al total de los votantes. el  usuario
teclara lso votos de manera desargonizado tal y como se obtuvieron en eleccion el final de datos
esta representado por un cero.

*/

#include<iostream>
#include <math.h>
#include<conio.h>
using namespace std;
void voto(int c1, int c2,int c3,int c4, int&a,int&b,int&c,int&d,float&suma){
	int valores[]={1,3,1,4,2,2,1,4,1,1,1,2,1,3,1,4,0}; // inicializo mi array
c1=0,c2=0,c3=0,c4=0,a,b,c,d;
 for(int i= 0; i < 17; i++){
 	suma+=valores[i];
		if(valores[i]==1){
			a=++c1;
		}else if(valores[i]==2){
			b=++c2;
		}else if(valores[i]==3){
			c=++c3;
		}else if(valores[i]==4){
			d=++c4;
		}

    }
}
int main(){
float p1,p2,p3,p4,suma=0;
int c1=0,c2=0,c3=0,c4=0,a,b,c,d;
voto(c1,c2,c3,c4,a,b,c,d,suma);
p1=(a/suma)*100;
p2=(b/suma)*100;
p3=(c/suma)*100;
p4=(d/suma)*100;
cout<<"votos del candidato con identificador 1: "<<a<<" porcentaje: "<<p1<<endl;
cout<<"votos del candidato con identificador 2: "<<b<<" porcentaje: "<<p2<<endl;
cout<<"votos del candidato con identificador 3: "<<c<<" porcentaje: "<<p3<<endl;
cout<<"votos del candidato con identificador 4: "<<d<<" porcentaje: "<<p4<<endl;
}
