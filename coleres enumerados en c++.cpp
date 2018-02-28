#include<iostream>
#include<cstdlib>
#include"windows.h"//para la funcion setconsoletextattribute
using namespace std;
void cambiarcolor(int X)
{ 
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X); 
} 
int main()
{
    for(int i=0;i<=255;i++)
    {
        cambiarcolor(i);//llamada a la funcion
        cout<<"COLOR = "<<i<<endl;
    }
    system("PAUSE");
    return 0;
}
