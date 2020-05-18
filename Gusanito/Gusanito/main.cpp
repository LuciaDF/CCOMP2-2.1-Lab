//
//  main.cpp
//  Gusanito
//
//  Created by Jorge Dueñas on 5/12/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//
/*
#include <iostream>
using namespace std;
 

char tablero[10][6]={
    '+','+','+','+','+','+','+','+','+','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','0','1','0','1','0','1','0','1','+',
    '+','+','+','+','+','+','1','0','1','+'}

 */

#include <iostream>
#include "mylib.hpp"
#include "stdlib.h"
#include <string>
/*
#define ARRIBA
#define IZQ
#define DER
#define ABAJO
 */

using namespace std;
int b=7,c=0,m=7,o=7;
/*
void gotoxy(int x, int y)
{
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_hANDLE);
    COORD dwPos;
    dwPos.X=x;
    dwPos.Y=y;
    SetConsoleCursorPosition(hCon,dwPos);
}
void OcultarCursor()
 {
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_hANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize=2;
    cci.bVisible=false;
    SetConsoleCursorInfo(hCon,&cci);
 
 }
*/
//void dibujar(char a,int &b,int &c);

int main()
{
    //jugador(b,c);
    cout<<"******BIENVENIDO AL GUSANITO******"<<endl;
    char n = '0';
    char h = '0';
    char x='a';
    
    while (x!= 'u') {
        dibujar(n,b,c,m,o,h);
    }
    
}
/*
int main()
{
   
    OcultarCursor();
    int x,y;
    gotoxy(x,y);printf("*");
    bool end_game=false;
    while(!end_game)
    {
        if(kbhit()){
            char tecla= getch();
            gotoxy(x,y);printf(" ");
            if(tecla==IZQ){
                x--;
            }
            if(tecla==DER){
                x++;
            }
            if(tecla==ARRIBA){
                x--;
            }
            if(tecla==ABAJo){
                x++;
            }
            gotoxy(x,y);printf("*");
        }
    }
    }
 
     char sent[3];
     bool end=true;
     
     do{
         cout<<"Posición siguiente: ";cin>>sent;
         if(strcmp(sent,"A")== 0 and(strcmp(sent,"a"))==0)
             end=false;
     }while (end);
     cout<<"finaliza recorrido."<<endl;
    */
 


