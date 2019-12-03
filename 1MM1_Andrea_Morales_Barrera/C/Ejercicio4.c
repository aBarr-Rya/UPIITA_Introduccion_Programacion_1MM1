/*Escribir un programa que convierte un número dado de segundos en su
equivalente de horas, minutos y segundos.*/

#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int totalSeg,horas=0,min=0,seg=0,opc;	char dec[10];
//prototipo de funcion
void tiempo(int totalSeg, int,int,int);


//hilo unico y principal
int main(){
	
	//variables

	//comienzo
	system("CLS");
		
	printf("                 Hola Bienvenido      \n\nusted ha entrado al conversor de segundos a horas y minutos");

	printf("\n-Salir [1] -Continuar [2]");
	scanf("%i",&opc);
	
	if(opc==1){
		printf("saliendo del programa......");
		exit(1);
	}
	
	do{
		
		system("CLS");
		system("COLOR f4");
		printf("Calculando....");
		//pidiendo datos...
		
		printf("\n\nIntroduce el numero de segundos a convertir ");
		scanf("%i",&totalSeg);fflush(stdin);
		//pasando variables 
		tiempo(totalSeg,horas,min,seg);
			
		printf("\n\n\n¿Desea volver a calcular otro resultado?");
		gets(dec);	
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa .......\n\n");
	
	
	system("pause");
	return 0;
}
//funcion definida
void tiempo(int totalSeg,int horas,int min,int seg){	
	horas = totalSeg/3600;
	totalSeg =totalSeg%3600;
	min = totalSeg/60;
	seg = totalSeg%60;
	 
			printf("\n\n       Horas:    %i",horas);
			printf("       Minutos:  %i",min);
			printf("       Segundos: %i",seg);
}
