/*realice un programa que cree un archivo llamado sueldos.dat que almacene la 
tabla de sueldos de los trabajadores de la empresa x ,pregunte al usuario la cantidad de sueldos
 almacenar */
 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	int cantidad;
	float sueldo;
	
	printf("ingrese la cantidad de sueldo que desea guardar:");
	scanf("%d",&cantidad);
	 
	
	FILE *archivo= fopen("sueldos.dat","wb");
	
	for(int i=0 ; i<cantidad; i++)
	{
		
		printf("ingrese el sueldo %d : " , i+1);
		 scanf ("%f",&sueldo);
		 
		 fwrite(&sueldo,sizeof (float),1,archivo);
		 
	}
	
	fclose(archivo);
	
	return 0;
	
}
