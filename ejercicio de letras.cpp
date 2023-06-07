/*Realiza un programa que lea un archivo de texto que contiene letras en 
min�scula y cree un archivo de texto con las mismas letras del
 archivo anterior pero con letras may�sculas. Es decir, el programa 
 debe convertir de min�sculas a may�sculas. */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main() {
    FILE *a , *A;
    char letra;

    a= fopen("a.txt", "r");
    A= fopen("archivo.mayuscula.txt", "w");

    if (a== NULL || A== NULL) {
        printf("Error al abrir los archivos.");
        exit(1);
    }

    while ((letra= fgetc(a)) != foef) {
        fputc(toupper(letra), A);
    }

    fclose(a);
    fclose(A);

    printf(" convertido exitosamente.");

    return 0;
}
