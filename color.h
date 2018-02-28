#include<conio.h>
#include<iostream>
#include<windows.h>
using namespace std;

void cambiarcolor(int X)
{
     SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);
}
