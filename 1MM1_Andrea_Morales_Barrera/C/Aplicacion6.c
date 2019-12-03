/*	Nivel en pozos. Para la medición de nivel en pozos profundos
de agua, se establece el uso de transmisores de presión
diferencial sumergible. Éste mide la presión hidrostática que
ejerce la columna de agua en el sensor que proporciona una
salida de voltaje directamente proporcional a la presión. Se
requiere el diseño e implementación de un programa que
obtenga el volumen de agua o Diesel (según sea el líquido
contenido) de un pozo de forma cilíndrica de d metros de
diámetro (el usuario da el valor de d). La altura del agua se
calcula con la siguiente fórmula:
h = p / (P * g)
tal que,
p = presión hidrostática [bar] (dada por el sensor, el usuario ingresa el valor)
P = densidad del fluido [kg / m³]
g = aceleración gravitacional o fuerza [m / s ²]
h = altura de la columna de líquido [m]
donde 1 bar corresponde aproximadamente a 10 metros de agua dada su densidad de
fluido de 1000 kg / m³, mientras que el Diesel tiene una densidad de fluido de 820kg/m 3 .
*/

#include<conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define densidadAgua 1000
#define densidadDiesel 820
#define gravedad 9.81


//prototipo de funciones

void calculaAltura(int );
void calculaVolumen(double );
void convierteBares(double );

double presionHM,presionH,Altura,Volumen,radio,diametro;
//hilo unico y principal
int main(){
	
	//variables
	int opc,liqui;char dec[10];
	//comienzo
	system("CLS");
		
	printf("                                Hola Bienvenido      \n\nusted ha entrado al Problema Aplicacion");

	printf("\n-Salir [1] -Continuar [2]  ");
	scanf("%i",&opc);
	
	if(opc==1){
		printf("saliendo del programa......");
		exit(1);
	}
		
	do{
		system("CLS");
		system("COLOR 16");
	
		printf("Calculando....");
		//pidiendo datos...
		do{
		
		printf("\n\n ¿Que deseas convertir? \n\n  Diesel  [1]  Agua  [2]   ");
		scanf("%i",&liqui);fflush(stdin);
		
		if(liqui==1){
			    system("COLOR fA");
				printf("\n introduce el diametro ");
				scanf("%lf",&diametro);fflush(stdin);
				calculaAltura(liqui);fflush(stdin);
				calculaVolumen(diametro);fflush(stdin);
				printf("\n  El volumen con Diesel en un pozo de radio %.2lf\n y a una presion Hidrostatica de %.2lf pascales es : %.4lf",radio,presionHM,Volumen );
				
		}else if(liqui==2){
				system("COLOR fD");
				printf("\n introduce el diametro ");
				scanf("%lf",&diametro);fflush(stdin);
				calculaAltura(liqui);fflush(stdin);
				calculaVolumen(diametro);fflush(stdin);
				printf("\n  El volumen con Agua en un pozo de radio %.2lf\n y a una presion Hidrostatica de %.2lf pascales es : %.4lf",radio,presionHM,Volumen );
				
	
			
		}else{
			system("CLS");
			printf("\nNo has introducido una opcion valida, intentalo de nuevo");
			
		}
		
		}while(liqui!=1 &&liqui!=2);
		
					
		printf("\n\n\n¿Desea volver a calcular otro resultado?");
		gets(dec);	
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");
	
	
	getch();
	return 0;
}
//funcion 

void calculaAltura(int liqui){
	
	printf("Dime cual es la Presion Hidrostática  ");
	scanf("%lf",&presionH);convierteBares(presionH);
	
	if(liqui==1){
			Altura = presionHM / (densidadDiesel * gravedad) ;	
	}else{
			Altura = presionHM / (densidadAgua * gravedad) ;	

	}
		
	


}
void calculaVolumen(double diametro){
	radio=diametro/2;
	Volumen=Altura*(3.1416)*(pow(radio,2));
	
}
void convierteBares(double PresionH){
	presionHM=PresionH*100000;
}


