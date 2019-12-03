/*
Escribir un programa para convertir una medida dada en pies a sus equivalentes
en: yardas, pulgadas, centímetros y metros (1 pie= 12 pulgadas, 1 yarda= 3 pies, 1
pulgada = 2.54 cm, 1 m = 100 cm). Leer el número de pies e imprimir el número de
yardas, pies, pulgadas, centímetros y metros.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
	
	int i=0,opc,escoge;float pies,conver;char dec[10],medida[20];
	
	
		system("CLS");
		
	printf("                 Hola Bienvenido      \n\nusted ha entrado a la modalidad Convertir Pies a {  -yardas\n                                                    -pulgadas\n                                                    -centimetros\n                                                    -metros\n} ");

	printf("\n-Salir [1] -Continuar [2]  ");
	scanf("%i",&opc);
	
	if(opc==1){
		printf("saliendo del programa......");
		exit(1);
	}
	
	do{
	
		fflush(stdin);
		system("CLS");
		system("COLOR 5E");
		printf("Calculando....");
		printf("\n\nIntroduce los pies a convertir: ");
		scanf("%f",&pies);
		fflush(stdin);
		printf("A que unidad deseas convertirlos? :  ");
		printf("Yardas [0] Pulgadas [1] Centimetros [2] metros [3]  ");
		scanf("%i",&escoge);
		fflush(stdin);
		
		
		for( i=0;i<20;i=i+1){
				medida[i]='\0';
			}
			
		switch(escoge){
			
			case 0:
				conver=pies/3;
				strcat(medida,"Yardas");
			break;
			case 1: 
				conver=pies*12;
				strcat(medida,"Pulgadas");
			break;
			case 2: 
				conver=pies*30.48;
				strcat(medida,"Centrimetros");
			break;
			case 3: 
				conver=pies*.3048;
				strcat(medida,"Metros");
			break;
			default: 
			printf("no has tecleado una opcion correcta");
			
		}
		
	
		printf("\n\n%.2f  Pies  a %s es :  %.2f ",pies,medida,conver);
		printf("\n\n\n¿Desea volver a calcular otro resultado?");
		gets(dec);
		
		
	
		
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");
	system("pause");
	return 0;
	
}
