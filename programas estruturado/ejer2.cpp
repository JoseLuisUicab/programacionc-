#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    int con=0;
    char usuario[8];
    char usuario2[8];

    printf("INGRESE SU NOMBRE DE USUARIO (QUE TENGA 8 CARACTERES)");
    for(int i= 0; usuario[i]!='0'; i++) {
        do {
            gets(usuario);
            con = strlen(usuario);
            if(i==8) {
                printf("requisito cumplido nombre con 8 caracteres\n");
                break;
            }
            else {
                printf("nombre excede los 8 caracteres o es menor \n");
                printf("vuele a ingresar el nombre\n");
            }
        }
        while (con==8);
    }

    printf("%s",usuario,".-----");
    printf("\n");
    printf("repita el usuario: ");
    gets(usuario2);
    if (strcmp(usuario,usuario2)==0) {
        printf("son iguales los nombres \n%s\n%s",usuario,usuario2);
    }
    else {
        printf("son iguales los nombres \n%s\n%s",usuario,usuario2);
    }
    getch();
    return 0;
}
