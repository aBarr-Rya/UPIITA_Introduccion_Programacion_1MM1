//*********************************************************************************
// Unidad Profesional Interdisciplinaria en Ingeniería y Tecnologías Avanzadas IPN 
//                         Morales Barrera Andrea 1MM1 
//                         Programa Ing Mecatrónica
//                        Introduccion a la Programacion
//*********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
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
    SetConsoleTitle("Morales Barrera Andrea     => Reloj en C <=     1MM1-UPIITA ");
    // Tamaño:
    SMALL_RECT windowSize = {0, 0, 9, .7};
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
        
        size.X += (SHORT)(size.X * 10);
        size.Y += (SHORT)(size.Y * 10);
        SetFontSize(h, size);
        }
 
///////////////////////////////////////////////////////
//// Reloj programacion
 int segundos=0, minutos=0,lala=0, horas=0;
 int coloracion=0;system("color fb");
	while(1){
		lala=segundos;
		segundos++;
		 
		if(segundos==60){
			segundos=0;
			minutos++;
			if(minutos==60){	
				minutos=0;
				horas++;
			}
		}
		
		if(lala==9||lala==19||lala==29||lala==39||lala==49||lala==59){
			
			switch(coloracion){
				case 0:
					system("color FD");coloracion++;
					break;
				case 1:
					system("color FC");coloracion++;
					break;
				case 2:	
					system("color F8");coloracion++;
					break;
				case 3:	
					system("color F6");coloracion++;
					break;
				case 4:	
					system("color F4");coloracion++;
					break;
				case 5:	
					system("color FA");coloracion++;
					break;
				case 6:	
					system("color F1");coloracion++;
					break;
				case 7:	
					system("color F5");coloracion++;
					break;
				case 8:	
					system("color F4");coloracion++;
					break;
				case 9:	
					system("color F6");coloracion++;
					break;
			}
			
		if(coloracion==9){
			coloracion=0;
		}
		
		}
		
		system("cls");
		printf("[%.2d:%.2d:%.2d]",horas,minutos,segundos);
		Sleep(1000);
	}
    return EXIT_SUCCESS;
    }

