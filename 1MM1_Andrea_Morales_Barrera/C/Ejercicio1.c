/*Escribir un programa que resuelva la siguiente expresión:

                    (x+y)^2 * (a-b)

*/


#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

int main(){
	
	int opc;float x,y,a,b,res;char dec[10] ;
	
	do{
		system("CLS");
		
	printf("Hola Bienvenido, \n\nusted ha entrado a la modalidad calcular la expresion :\n\n                    (x+y)^2 * (a-b) \n\n  ");
	
	printf("\n-Si desea salir pulse 1 -Si desea continuar pulse 2  ");
	scanf("%i",&opc);
	
	if(opc==1){
		printf("saliendo del programa");
		exit(1);
	}else{
		system("CLS");
		system("COLOR 4f");
		printf("Calculando....");
		printf("\n\nIntroduce el valor de x :");
		scanf("%f",&x);
		printf("Introduce el valor de y :");
		scanf("%f",&y);
		
		printf("Introduce el valor de a :");
		scanf("%f",&a);
		printf("Introduce el valor de b :");
		scanf("%f",&b);
		fflush(stdin);
		res=(pow((x+y),2)) * (a-b);
		printf("\n\nEl resultado de ( %.2f + %.2f )^2 * ( %.2f - %.2f) es : %.2f ",x,y,a,b,res);
		
		printf("\n\n\n¿Desea volver a calcular otro resultado?  ");
		gets(dec);
		
		
	}
		
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");
	system("pause");
	return 0;
	
}
