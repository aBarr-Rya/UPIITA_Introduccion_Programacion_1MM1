/*
Escribir un programa que lea la temperatura en grados Celsius y convierta a
Farenheit y viceversa. El usuario ingresará el valor de los grados y una letra: la
cual indica que tipo de grados está ingresando, dicha letra puede ser una ‘c’ si los
grados ingresados son Celsius o una ‘f’ si los grados ingresados son Farenheit.
Por ejemplo puede ingresar: 25f

*/

#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//prototipo de funcion
void convierteaCelcius(double );
void convierteaFarenheit(double );
double farenheit,celcius;
//hilo unico y principal
int main(){
	
	//variables
	int opc,temp;char dec[10];
	//comienzo
	system("CLS");
		
	printf("                                Hola Bienvenido      \n\nusted ha entrado al conversor de Celcius-Farenheit && Farenheit-Celcius");

	printf("\n-Salir [1] -Continuar [2]  ");
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
		do{
		
		printf("\n\n ¿Que deseas convertir? \n\n  Celcius a Farenheit [1]  Farenheit a Celcius [2]   ");
		scanf("%i",&temp);fflush(stdin);
		
		if(temp==1){
			    system("COLOR fA");
				printf("\n introduce los grados Celcius a convertir  ");
				scanf("%lf",&celcius);
				convierteaFarenheit( celcius);
				printf("\n %.2lf grados Celcius  a Farenheit son : %.2lf",celcius,farenheit);
		}else if(temp==2){
				system("COLOR fD");
				printf("\nintroduce los grados Farenheit a convertir  ");
				scanf("%lf",&farenheit);fflush(stdin);
				convierteaCelcius( farenheit);
				printf("\n %.2lf grados Farenheit a Celcius son : %.2lf",farenheit,celcius);
	
			
		}else{
			system("CLS");
			printf("\nNo has introducido una opcion valida, intentalo de nuevo");
			
		}
		
		}while(temp!=1 &&temp!=2);
		
					
		printf("\n\n\n¿Desea volver a calcular otro resultado?");
		gets(dec);	
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");
	
	
	getch();
	return 0;
}
//funcion 

void convierteaCelcius(double farenheit){	
	celcius=(5*(farenheit-32))/9;


}
void convierteaFarenheit(double celcius){
	farenheit=((9*celcius)/5)+32;
	
}



