//*********************************************************************************
// Unidad Profesional Interdisciplinaria en Ingeniería y Tecnologías Avanzadas IPN 
//                         Morales Barrera Andrea 1MM1 
//                         Programa Ing Mecatrónica
//                        Introduccion a la Programacion
//                        
//*********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include<string.h>
#include<conio.h>
//funciones 

HANDLE wHnd; 
HANDLE rHnd;    
int GetFontSize(HANDLE windowHandle, COORD *size)
    {
    	
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };
 
    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    *size = font.dwFontSize;
 
    return 1;
    }
 
int SetFontSize(HANDLE windowHandle, COORD size)
    {
    CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };
 
    if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    font.dwFontSize = size;
 
    if (!SetCurrentConsoleFontEx(windowHandle, 0, &font))
        {
        return 0;
        }
 
    return 1;
    }
int generaAleatorio(){
	
    srand(time(NULL));

      int  aleat = 1 + rand() % (101 - 1);
	
	return aleat;
}

void leearchivo(char numm[2],char fil[80]){
	char aux;
	FILE *f;
	char vaya[140],wu[2];strcpy(vaya,fil);strcpy(wu,numm);
	strcat(vaya,wu);
	strcat(vaya,".txt");
	
	f= fopen(vaya,"r");
	if(f==NULL){
		printf("Lo lamento pero ha ocurrido un error comunicate al servicio tecnico AndreaGoldComputingMexka@outlook.com");
		exit(1);
	}
	while(aux !=EOF){
		aux=fgetc(f);
		printf("%c",aux);
	}
	printf("\n");
	fclose(f);
}
int numgood=0,numbad=0;char nombre[40],boleta[10];


dimeCorrect(char numm[2]){
	char elegid,aux;
	printf("Tu respuesta : ");
	scanf("%c",&elegid);
	//printf("\n %i",elegid);
	FILE *f;
	char vaya[100]="E:/1MM1_Andrea_Morales_Barrera_Final/Respuestas/Pregunta",vayay[60],wu[2];strcpy(wu,numm);
	strcat(vaya,wu);
	strcat(vaya,".txt");
	
	f= fopen(vaya,"r");
	if(f==NULL){
		printf("Lo lamento pero ha ocurrido un error comunicate al servicio tecnico AndreaGoldComputingMexka@outlook.com");
		exit(1);
	}

	aux=fgetc(f);
		
	
	//printf("%c jjj",aux);
	fclose(f);
	//sscanf(aux,"%i",cmp);
	if(elegid==aux){
		printf("\n\n                   Respuesta Correcta!! wuu  :D \n\n\n\n");
		numgood++;
	}else{
		printf("\n\n                   Respuesta Incorrecta  :( \n\n\n\n");
		numbad++;
	}
	
}

muestraResultados(char nombre[40],char decir[30],char boleta[10],int total){
	system("cls");system("color B4");int prom=(100*numgood)/total;
	printf("**************************************************************************************");
	printf("\n Resultados de %s",nombre);
	printf("\n Boleta :  %i  ",boleta);
	printf("\nRespuestas Correctas    : %i  ",numgood);
	printf("\nRespuestas Incorrectas  : %i  ",numbad);
	printf("\nPromedio                : %d  ",prom);
	printf("\n**************************************************************************************");
	
	FILE *f;
	
	f= fopen("E:/1MM1_Andrea_Morales_Barrera_Final/Resultados.txt","a");
	if(f==NULL){
		perror("Lo lamento pero ha ocurrido un error comunicate al servicio tecnico AndreaGoldComputingMexka@outlook.com");
	
	}else{
	fprintf(f,"Tipo Examen            :  %s \n",decir);
	fprintf(f,"Nombre                 :  %s \n",nombre);
	fprintf(f,"Boleta                 :  %s \n",boleta);
	fprintf(f,"Respuestas Correctas   :  %i \n",numgood);
	fprintf(f,"Respuestas Incorrectas :  %i \n",numbad);
	fprintf(f,"Promedio en porcentaje :  %d \n",prom);
	fprintf(f,"-----------------------------------------------------------------------------\n\n");
	}
	
	fflush(stdin);
	fclose(f);
	
	
	
}


int main(void)
    {
    	//system( "mode con:cols=10 lines=30" ); cambia tamaño, pero no al instante
    //// Tamaño de la Consola////////////////////////////////////	
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    // Titulo Consola:
    SetConsoleTitle("  Morales Barrera Andrea Cuestionario Aleatorio en C 1MM1");
    // Tamaño:
    SMALL_RECT windowSize = {2, 2, 150, 30};
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
    // Cambia Tamaño:
    // Coord tamaño Buffer
    COORD bufferSize = {10, 0};
    SetConsoleScreenBufferSize(wHnd, bufferSize);
    
    //////////////////////////////////////////////////////
    // Tamaño de Letra Consola
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD size;
 
    if (GetFontSize(h, &size))
        {
        
        size.X += (SHORT)(size.X * .5);
        size.Y += (SHORT)(size.Y * .5);
        SetFontSize(h, size);
        }
 
///////////////////////////////////////////////////////
//// Preguntas Programacion
		//variables
	int i,contador=0,opc,dime, canti=0;char dec[10],numm[2];
	//comienzo
	system("CLS");system("color 0B");
		
	printf("                                            Hola, Bienvenido       \n\n                        Usted ha entrado a El Cuestionario Aleatorio de Programacion");

	printf("\n\n\n\n                                => Salir [1]        => Continuar [2]  ");
	scanf("%i",&opc);
	
	if(opc!=2){
		printf("             saliendo del programa......");
		exit(1);
	}
		
	
		system("CLS");
		system("COLOR 0D");fflush(stdin);
//pidiendo Datos y validando.. 
//Nota: En C NO existen las excepciones así que utilizare un if ya que el goto genera codigo espagetti y no es recomendable hacer uso de el actualmente
		printf("************************************************************************************************************************");
		printf("\n*\n* =>>  Introduce tu Nombre           : ");
		gets(nombre);	
		fflush(stdin);
		printf("* =>>  Introduce tu Numero de Boleta : ");
		gets(boleta);
		fflush(stdin);
		printf("*\n************************************************************************************************************************");
		do{
		contador=0;numgood=0;numbad=0;
		printf("\n\n                                    Que deseas Realizar %s? \n\n    0 => Modo Aprendizaje 1=> Examen Aleatorio Completo[10] 2=> X numero de preguntas 3=> Examen Ordenado :\n\n\n\n                                ",nombre);
		printf("*******************************\n                                                ");scanf("%i",&dime);
		printf("                                *******************************\n\n\n");fflush(stdin);system("pause");
		//iniciando Procesos
		if(dime==0){
			//Modo Aprendizaje
			char decir[30]="Modo Aprendizaje";
			system("cls");system("color 9f");
			
			for( i=0;i<=100;i++){
			contador++;
			printf("                             Muy Bien %s, has seleccionado %s, \n                                              Exito!!    ",nombre,decir);
			printf("\n\n");
			printf("\nPregunta Numero : %i",contador);printf("\n\n");
			sprintf(numm, "%i", generaAleatorio());
			leearchivo(numm,"E:/1MM1_Andrea_Morales_Barrera_Final/100_Preguntas_Ansi/Pregunta");printf("\n\n\n");
			system("pause");system("cls");	
			
			}
			
		}else if(dime==1){
			//Examen Aleatorio Completo
			char decir[30]="Examen Aleatorio Completo[10]";
			system("cls");system("color 2F");
			
			for( i=0;i<=9;i++){
				contador++;
			printf("                             Muy Bien %s, has seleccionado %s, \n                                                  Exito!!    ",nombre,decir);
			printf("\n\n");
			printf("\nPregunta Numero : %i",contador);printf("\n\n");
			sprintf(numm, "%i", generaAleatorio());
			leearchivo(numm,"E:/1MM1_Andrea_Morales_Barrera_Final/Preguntas/Pregunta");printf("\n\n\n");
			dimeCorrect(numm);fflush(stdin);
			system("pause");system("cls");	
			
			}
			muestraResultados(nombre,decir,boleta,contador);
		
			
		}else if(dime==2){
			//Examen Aleatorio X numero de preguntas
			char decir[30]="X numero de preguntas";system("cls");system("color 60");
			printf("\n       Introduce el numero de preguntas que deseas Realizar Porfavor  :  ");scanf("%i",&canti);
			fflush(stdin);system("cls");
			
			
			for( i=0;i<canti;i++){
				contador++;
			printf("\n                           Muy Bien %s, has seleccionado %s, \n                                Exito!!    ",nombre,decir);
			printf("\n\n");
			printf("\nPregunta Numero : %i",contador);printf("\n\n");
			sprintf(numm, "%i", generaAleatorio());
			leearchivo(numm,"E:/1MM1_Andrea_Morales_Barrera_Final/Preguntas/Pregunta");printf("\n\n\n");
			dimeCorrect(numm);fflush(stdin);
			system("pause");system("cls");	
			
			}
			muestraResultados(nombre,decir,boleta,contador);
		
		}else if(dime==3){
			//Examen  Ordenado
			char decir[30]="Examen Ordenado";system("cls");system("color cF");
			
			
			for( i=0;i<100;i++){
			contador++;
			printf("\n                           Muy Bien %s, has seleccionado %s, \n                                                  Exito!!    ",nombre,decir);
			printf("\n\n"); 
			printf("\nPregunta Numero : %i",contador);printf("\n\n");
			sprintf(numm, "%i", contador);
			leearchivo(numm,"E:/1MM1_Andrea_Morales_Barrera_Final/Preguntas/Pregunta");printf("\n\n\n");
			dimeCorrect(numm);fflush(stdin);
			system("pause");system("cls");	
			
			}
			muestraResultados(nombre,decir,boleta,contador);
			
			
			
			
			
		}else{
			//Opcion Incorrecta
			printf("No has introducido una opcion Valida, intenta con 0,1,2 o 3 :0");
		}
		
					
		fflush(stdin);printf("\n\n\n¿Desea volver al menu? :");
		gets(dec);	system("cls");
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del programa.......\n\n");


 
    
    
	
	return EXIT_SUCCESS;
}
    




