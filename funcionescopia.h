#include<conio.h>
#include<iostream>
#include<windows.h>
#include<stdio.h>


void cambiarcolor(int X)
{
     SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);
}



void gotoxy(int x, int y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon,dwPos);
}
