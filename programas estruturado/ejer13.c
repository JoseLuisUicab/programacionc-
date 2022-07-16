#include<conio.h>
#include<windows.h>
#include<stdio.h>


	void gotoxy(int x, int y){
		HANDLE hcon;
		hcon= GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X = x;
		dwPos.Y = y;
		SetConsoleCursorPosition(hcon,dwPos);
	}



int main(){

	int respuesta=0, biblio=0;
	char ISBM, TITULO, AUTOR, EDITORIAL, pedirI, BL, MD, borrarL;

	printf("Biblioteca DEL CAMPUS");
	printf("\n  **lIBROS** ");
	printf("\n 1. ALTA ");
	printf("\n 2. CONSULTA ");
	printf("\n 3. CAMBIOS ");
	printf("\n 4. BAJA ");
	printf("\n 5. LISTADO GENERAL ");
	printf("\n");


	scanf("%i", &biblio);
	fflush(stdin);
	switch(biblio){
		case 1:
			printf(" *ALTA* ");
			printf("\n ISBN: ");
			scanf("%d", &ISBM);
				fflush(stdin);
			printf("\n Titulo: ");
			scanf("%d", &TITULO);
				fflush(stdin);
			printf("\n Autor: ");
			scanf("%d", &AUTOR);
				fflush(stdin);
			printf("\n Editorial: ");
			scanf("%d", EDITORIAL);
				fflush(stdin);

		break;

		case 2:
			printf(" *CONSULTA* ");
			printf("\n Agrega el ISBM: ");
			scanf("%d", &pedirI);
				fflush(stdin);
			printf("\n Buscar Libro");
			printf("\n libro no encontrado");
				fflush(stdin);
			printf("\n Mostrar datos");
			printf("\n datos no encontrados");
				fflush(stdin);

		break;

		case 3:
			printf(" *CAMBIOS* ");
			printf("\n introduce el ISBN: ");
			scanf("%d", &ISBM);
				fflush(stdin);
			printf("\n No se encontraron datos ");

		break;

		case 4:

			printf(" *BAJAS* ");
			printf("\n Introduce el ISBN: ");
			scanf("%d", &ISBM);
			printf("\n Deseas eliminar este libro? ");
			do
			{
				printf("\n SI, PRECIONA ENTER: ");
				printf("\n NO, Preciona 0: ");
				printf("\n");
				scanf("%d", &borrarL);



			}while(borrarL!=0);

			break;

		case 5:
			printf("Mostrar todos los datos ");
			printf("\n !!!No hay datos disponibles!!!");

			break;


	}
}
