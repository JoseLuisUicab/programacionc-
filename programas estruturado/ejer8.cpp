
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int eleccion = 0,n=0,res=0,fin=0;
    float cali=0;
    while (eleccion !=4)
    {

        printf("Elija una de estas opciones\n");
        printf("1. Ingresar dos numeros\n");
        printf("2. Mostrar cual es el mayor y cual el menor\n");
        printf("3. Mostrar la suma de los dos numeros\n");
        printf("4. Salir\n");

        scanf("%d", &eleccion);
        switch (eleccion)
        {
        case 1:

            break;
            case 2:

            break;
            case 3:
            	printf("Numero de notas: ");
            		scanf("%i",&n);
            		for(int i= 0; i < n; i++) {
            		 printf("%f",&cali);
            		 res= res + cali;
            		 fin = res/n;
            		}
            		printf("promedio: %f",fin);


            break;

        default:
            break;
        }



    };

    return 0;
}
