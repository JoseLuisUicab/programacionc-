#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*1Escribir un programa en C que realice las siguientes operaciones:
	La informaci�n debe ser introducida desde la funci�n principal (main) y
	quedar almacenada en un vector de 3 elementos llamado vecEstrucCtes que tiene la siguiente estructura:
2.	El programa debe imprimir desde una funci�n llamada funcLetraApellido el primer nombre y primer apellido
	de aquellos estudiantes que viven en calle A Sur y avenida 2da oeste del corregimiento de David
	y la primera letra de su primer apellido sea �F�.
3.	El programa debe imprimir desde una funci�n llamada funcTotalEst el total de estudiantes que nacieron en Cocl� en el mes de junio del 1990.
4.	 El programa debe buscar e imprimir desde una funci�n llamada funcNomEdad
los nombres completos y la edad de aquellos estudiantes que tienes una edad entre 18 y 25 a�os, inclusive.

*/

struct estudiante{
	char primer_nombre[15];
	char segundo_nombre[15];
	char primer_apellido[15];
	char segundo_apellido[15];
};

struct cedula{
	char Tomo[2];
	int Folio;
	int Asiento;
};

struct direccion{
	char provincia[20];
	char distrito[20];
	char corregimiento[20];
	char urbanizacion[20];
	char calle[20];
	char avenida[20];
};

struct fechadenacimiento{
	int dd;
	int mm;
	int aa;
};

struct registro{
	struct cedula cedla;
	struct estudiante nomb;
	struct direccion dircc;
	int edad;
	struct fechadenacimiento fechanac;
} vecEstrucCtes[3];

//Introduccion de datos
int main(){
	printf("Registro de estudiantes y filtrado de datos");
	for(int i= 0; i < 3; i++) {
//Nombre del estudiante
		printf("\n");
		printf("\n\nIngrese el primer nombre del estudiante: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].nomb.primer_nombre);
		printf("\Ingrese el segundo nombre del estudiante: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].nomb.segundo_nombre);
		printf("\Ingrese el primer apellido del estudiante: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].nomb.primer_apellido);
		printf("\Ingrese el segundo apellido del estudiante: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].nomb.segundo_apellido);

//Cedula del estudiante
		printf("\n");
		printf("\nIngrese el tomo de la cedula del estudiante: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].cedla.Tomo);
		printf("Ingrese el folio de la cedula del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].cedla.Folio);
		printf("Ingrese el asiento de la cedula del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].cedla.Asiento);

//Direccion del estudiante
		printf("\n");
		printf("\nIngrese el nombre de la provincia donde nacio: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.provincia);
		printf("\Ingrese el nombre del distrito donde reside: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.distrito);
		printf("\Ingrese el nombre del corregimiento: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.corregimiento);
		printf("\Ingrese el nombre de la urbanizacion donde vive: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.urbanizacion);
		printf("\Ingrese el nombre de la calle: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.calle);
		printf("\Ingrese el nombre de la avenida: ");
		scanf(" %[^\n]", &vecEstrucCtes[i].dircc.avenida);

	printf("\n");
//edad del estudiante
		printf("\nIngrese la edad del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].edad);
		printf("\n");
//Fecha de nacimiento del estudiante
		printf("\nIngrese la fecha de nacimiento del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].fechanac.dd);
		printf("Ingrese el mes de nacimiento del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].fechanac.mm);
		printf("Ingrese el a�o de nacimiento del estudiante: ");
		scanf("%d", &vecEstrucCtes[i].fechanac.aa);
printf("\n\n");
	//Filtrado de datos
	printf("\nEstudiantes que viven en David, calle A sur, avenida 2 oeste");

	//Estudiantes que poseen edad de entre 18 y 25 a�os
	printf("\n\nEstudiantes que tienen entre 18 y 25 a�os de edad");
	for(int i=0;i<3;i++){
		if( vecEstrucCtes[i].edad >=18 && vecEstrucCtes[i].edad <=25 ){
			printf("\nNombre: %s %s %s %s",vecEstrucCtes[i].nomb.primer_nombre,vecEstrucCtes[i].nomb.segundo_nombre,
		vecEstrucCtes[i].nomb.primer_apellido, vecEstrucCtes[i].nomb.segundo_apellido);
		}
	}

	//Estudiantes que nacieron en Cocle en el mes de junio de 1990;
	for(int i=0;i<3;i++){
		if(strcmp(vecEstrucCtes[i].dircc.provincia,"cocle")==0 && vecEstrucCtes[i].fechanac.mm==6 &&
		vecEstrucCtes[i].fechanac.aa==1990 ){
			contador= contador + 1;
		}
	}
		printf("\n\nLa cantidad de estudiantes nacidos en Cocle en el mes de junio de 1990 es: %d", contador);
	return 0;
}

/*
 funcLetraApellido el primer nombre y primer apellido
	de aquellos estudiantes que viven en calle A Sur y avenida 2da oeste del corregimiento de David
	y la primera letra de su primer apellido sea �F�.
*/

void funLetraApellido(struct registro p[]){


}
