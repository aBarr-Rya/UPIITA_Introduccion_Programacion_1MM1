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

#define LONG_ALFAB 26
#define ALFABETMAYUS_INIC 65
#define ALFABETMINUS_INIC 97

#define LONG_CAD_MAX 5000
#define MOD(i, n) (i % n + n) % n // Calcular mod positivo

const char *alfabetMinus = "abcdefghijklmnopqrstuvwxyz",*alfabetMayus = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


int ord(char c);


//funciones para cifrar y decifrar
void cifrar(char *texto, char *destino, int vueltas) {
  
  int i = 0;
  while (texto[i]) {
    char caractActual = texto[i];
    int posicOrigin = ord(caractActual);
    if (!isalpha(caractActual)) {
      destino[i] = caractActual;
      i++;
      continue; 
    }
    if (isupper(caractActual)) {
      destino[i] =
          alfabetMayus[(posicOrigin - ALFABETMAYUS_INIC +
                              vueltas) %
                             LONG_ALFAB];
    } else {

      destino[i] =
          alfabetMinus[(posicOrigin - ALFABETMINUS_INIC +
                              vueltas) %
                             LONG_ALFAB];
    }
    i++;
  }
}

void descifrar(char *texto, char *destino, int vueltas) {
  
  int i = 0;
  while (texto[i]) {
    char caractActual = texto[i];
    int posicOrigin = ord(caractActual);
    if (!isalpha(caractActual)) {
      destino[i] = caractActual;
      i++;
      continue; 
    }
    if (isupper(caractActual)) {
      destino[i] = alfabetMayus[MOD(
          posicOrigin - ALFABETMAYUS_INIC - vueltas,
          LONG_ALFAB)];
    } else if (islower(caractActual)) {
      destino[i] = alfabetMinus[MOD(
          posicOrigin - ALFABETMINUS_INIC - vueltas,
          LONG_ALFAB)];
    }
    i++;
  }
}
int ord(char c) { return (int)c; }
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


int main(void)
    {
    	//system( "mode con:cols=10 lines=30" ); cambia tamaño, pero no al instante
    //// Tamaño de la Consola////////////////////////////////////	
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    rHnd = GetStdHandle(STD_INPUT_HANDLE);
    // Titulo Consola:
    SetConsoleTitle("  Morales Barrera Andrea       Encriptador/Desencriptador en C         1MM1-UPIITA");
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
	int opc,dime, canti=0;char dec[10], texto[LONG_CAD_MAX], textoCifrado[LONG_CAD_MAX],textoDescifrado[LONG_CAD_MAX];
	//comienzo
	system("CLS");system("color 0e");
		
	printf("                                            Hola, Bienvenido       \n\n                        Usted ha entrado a El Encriptador/Desencriptador en C");

	printf("\n\n\n\n                                => Salir [1]        => Continuar [2]  ");
	scanf("%i",&opc);
	
	if(opc!=2){
		printf("\n\n\n\n                                     saliendo del programa......\n\n\n\n\n");
		exit(1);
	}
		
	
		system("CLS");
		fflush(stdin);
//pidiendo Datos...
      
		do{
		fflush(stdin);system("COLOR 4e");
		printf("\n\n                                              Que deseas Realizar ? \n\n                           [1] => Encriptar texto           [2] => Desencriptar texto \n\n\n\n                                ");
		printf("       *******************************\n                                                        ");scanf("%i",&dime);
		printf("                                       *******************************\n\n\n");fflush(stdin);system("pause");
		//iniciando Procesos
				
		    memset(texto,0,LONG_CAD_MAX);memset(textoCifrado,0,LONG_CAD_MAX);memset(textoDescifrado,0,LONG_CAD_MAX);
       
		if(dime==1){
		
	
			//Encriptando..
			char decir[30]="Encriptar textos";
			system("cls");system("color FD");
			printf("\n                                       Has seleccionado %s \n                                   ",decir);
			
			printf("\n\n                             Escribe un texto a cifrar [Maximo %d caracteres]:\n\n",LONG_CAD_MAX - 1);
			int vueltas;
		
		    fgets(texto, LONG_CAD_MAX, stdin);
		    texto[strcspn(texto, "\r\n")] = 0;
		
		    printf("Escribe el numero de Vueltas que se daran a las letras:\n");
		    scanf("%d", &vueltas);  
			system("cls");system("color b0");printf("\n                                   Resultados de Encriptacion con Vueltas [%i]                                   ",vueltas);
			printf("\n\n-------------------------------------------------------------------------------------------------------------");
			printf("\nTexto original es      : %s\n", texto);
			cifrar(texto, textoCifrado, vueltas);
			printf("Texto cifrado es       : %s\n", textoCifrado);
			printf("--------------------------------------------------------------------------------------------------------------");

		
		}else if(dime==2){
			//Desencriptando..
			
			char decir[30]="Desencriptar textos";
			system("cls");system("color F4");
			printf("\n                                       Has seleccionado %s \n                                   ",decir);
			printf("\n\n                       Escribe un texto a Decifrar   [Maximo %d caracteres]:\n\n\n",
		    LONG_CAD_MAX - 1);int vueltas;
		
		    fgets(texto, LONG_CAD_MAX, stdin);
		    texto[strcspn(texto, "\r\n")] = 0;
		
		    printf("Escribe el numero de Vueltas que se daran a las letras:\n");
		    scanf("%d", &vueltas);  
		    system("cls");system("color b0");printf("\n                                  Resultados de Desencriptacion con Vueltas [%i]                                   ",vueltas);
			printf("\n\n-------------------------------------------------------------------------------------------------------------");
			printf("\nEl texto cifrado es     : %s\n", texto);
            descifrar(texto, textoDescifrado, vueltas);
            printf("El texto descifrado es  : %s\n", textoDescifrado);
			printf("-------------------------------------------------------------------------------------------------------------");

				
		}else{
			//Opcion Incorrecta
			printf("\nNo has introducido una opcion Valida, intenta con [1] => Encriptar o  [2] => Desencriptar ");
		}
		
					
		fflush(stdin);printf("\n\n\n Desea volver al menu ('si' o 'no')? :");
		gets(dec);	system("cls");
	
	}while(strcmp(strupr(dec),"NO"));
	printf("\nSaliendo del Encriptador/Desencriptador.......\n\n");


 
	
	return EXIT_SUCCESS;
}
    




