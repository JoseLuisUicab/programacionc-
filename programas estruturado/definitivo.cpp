#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <string.h>
#include <locale.h> //libreria que permite poner letras "especiales" sin necesidad de ASCII

/*
    Name: Proyecto Final
    Copyright:
    Author: Pablo
    Date: 28/05/22 14:17
    Description: Men�
*/

int main(){
    setlocale(LC_CTYPE, "Spanish"); // se usa para poder poner la '�' y otras mas sin necesidad del codigo ASCII

    int notas;
    float calificacion = 0, resultado = 0;
    float precio = 0, FIN = 0, fin = 0;
    int n = 0, cantidad = 0;

    int op = 0;                // Opciones de switch
    int a = 0, b = 0, res = 0; // Tablas
    int n_contra = 0;          // Contrase�a
    int n_num = 0;             // Estas listo

    printf("La contrase�a es '1234', debes ingresarla:\n");
    scanf("%i", &n_contra);

    if (n_contra == 1234)
    {

        printf("\n�Bienvenido Pablo!\n");
        printf("Te mostrare las opciones disponibles para ti :)\n");
        do
        {

            printf("Opcion 1: Tablas de multiplicar\n");
            printf("Opcion 2: Introducir total de productos y precio\n");
            printf("Opcion 3: Calificaciones\n");
            printf("Opcion 4: Contarte sobre mi\n");
            printf("Opcion 5: Salir\n");
            scanf("%i", &op);
            switch (op)
            {

            case 1:
                printf("Ingresa un numero del 1 al 10\n");
                scanf("%i", &a);
                for (b = 1; b <= 10; b++)
                {
                    res = a * b;
                    printf("%i"
                           "x"
                           "%i"
                           "="
                           "%i"
                           "\n",
                           a, b, res);
                }
                break;

            case 2:
                FIN = 0;
                printf("Ingresa la cantidad de productos, por favor\n");
                scanf("%i", &n);
                for (int i = 0; i < n; i++)
                {

                    printf("Ingresa el precio del producto:\n");
                    scanf("%f", &precio);
                    FIN = FIN + precio;
                }
                printf("El precio total de los productos es de: %f \n", FIN);

                break;

            case 3:
                // volvemos a incializar las variables para que cuando el bucle regrese no se
                // acumule el valor anterior
                fin = 0;
                resultado = 0;
                calificacion = 0;
                printf("Ingresa la cantidad de notas:\n");
                scanf("%i", &notas);
                for (int i = 0; i < notas; i++) {
                    printf("Ingresa la calificacion\n");
                    scanf("%f", &calificacion);
                    resultado = resultado + calificacion;
                    fin = resultado / notas;
                }
                printf("Tu promedio es de: %f \n", fin);

                break;

            case 4:
                printf("Te voy a contar sobre mi, �Estas listo/a?\n");
                printf("Opcion 1: Si\n");
                printf("Opcion 2: No\n");
                scanf("%i", &n_num);
                if (n_num == 1)
                {
                    printf("Muy bien, estas listo/a :)\n");
                    printf("Hola soy Pablo.\n");
                }
                else
                {
                    printf("Vuelve cuando estes listo/a\n");
                }
                break;

            default:
                printf("Saliendo del programa............");
                break;
            }

        } while (op != 5);
    }
    else
    {
        printf("Contrase�a incorrecta, intenta de nuevo :(");
    }
    system("pause");
    return 0;
}
