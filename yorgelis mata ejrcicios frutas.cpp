/*programa que cree un archivo que almacene los nombre de frutas(mango ,piña...)
pregunte al usuaria cuántas frutas va almacenar
 y Lee la fruta,luego almacene cada fruta en el archivo*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main() 
{
    FILE *archivo;
    int cantidadf, i;
    char fruta[20];

    printf("¿Cuántas frutas va almacenar? ");
    scanf("%d", &cantidadf);

    archivo = fopen("frutas.txt", "at"); //el archivo se abre en modo escritura y añadidura//

    if (archivo == NULL) //archivo no tiene valor asignado //
	 {
        printf("Error al abrir el archivo.");
        exit(1);
    }

    for (i = 0; i < cantidadf ; i++) 
	{
        printf(" fruta %d: ", i+1);
        scanf("%s", fruta);
        printf( "%s\n", fruta);
    }

    fclose(archivo); //se ciera el archivo luego de almacenar las frutas ingresadas por el usuario//

    printf("Las frutas han sido almacenadas con exito \n");

    return 0;
}
