/*	Nama	:	Lolla Mariah	(201511018)
				Shofiyah		(201511031)
	Kelas	: 	D3-1A Teknik Informatika
	Program	:	Heap Sort 
	Tahun	: 	2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <ctype.h>
#include "loading.h"

void gotoxy(int X, int y) {
 COORD coord;
 coord.X = X;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void loading_screen() {
 int i;
 gotoxy(40, 10);
 printf("Loading...");
 gotoxy(40, 12);
 for (i = 0; i <= 17; i++) {
  Sleep(90);
  printf("%c", 177);
 }
 printf("\n\n");
 //system("pause");
 system("cls");
}