/*
Calcular el volumen y área de un cono. El usuario ingresará el radio
y la altura ( ) el programa calculará el área [en una sola línea
de código] y el volumen [en otra línea]. Para ello requerirá obtener
el lado ( y usar como una constante.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define  pi 3.14159265358

int main(){
	
	int opc;double radio,altura,area,volumen,generatriz;char dec[10], medida[20];
	
	system("CLS");
		
	printf("                 Hola Bienvenido      \n\nusted ha entrado a la modalidad Calculo de Volumen y area del Cono ");

	printf("\n-Salir [1] -Continuar [2]  ");
	scanf("%i",&opc);
	
	if(opc==1){
		printf("saliendo del programa......");
		exit(1);
	}
	
	do{
		
		system("CLS");
		system("COLOR ec");
		printf("Calculando....");
		//pidiendo datos...
		
		printf("\n\nIntroduce la Altura: ");
		scanf("%lf",&altura);
		printf("Introduce el radio del cono: ");
		scanf("%lf",&radio);fflush(stdin);
		printf("Calculando Cono de altura  %.2lf y radio  %.2lf .... \n",altura,radio);
		
		//calculos
		generatriz=sqrt(pow(altura,2)+pow(radio,2));
		area=(pi*generatriz*radio)+(pi*(pow(radio,2)));
		volumen=(pi*(pow(radio,2))*altura)/3;
	
		//mostrando datos ...
		
		printf("El Cono posee ... \n\n-una generatriz de : %.2lf \n-un Area total de : %.2lf \n-un Volumen de : %.2lf",generatriz,area,volumen);
		
		printf("\n\n\n¿Desea volver a calcular otro resultado?");
		gets(dec);	
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");
	system("pause");
	return 0;
	
}
