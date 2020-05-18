//
//  main.cpp
//  funciones_ejercicios
//
//  Created by Jorge Dueñas on 5/5/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//

#include <iostream>
#include "liblu.hpp"

using namespace std;
int pi=3.14;
int g,h,z,w,m,n,u;
string e,o,f;
float c,d,r,s;
char a;

void nombrec(string &b)
{
     cout<<"*"<<b<<endl;
 }

void direccion(string &x)
 {
   cout<<"*"<<x<<endl;

 }

void edad(int &y)
 {
   cout<<"*"<<y<<endl;

 }
void telefono(int &z)
 {
   cout<<"*"<<z<<endl;

 }
void hobby(string &w)
 {
   cout<<"*"<<w<<endl;

 }
int main(int argc, const char * argv[]) {
     
    cout<<"****Escoge una de estas opciones.-*****"<<endl;
    cout<<"1 - Calculadora."<<endl;
    cout <<"2 - Imprimir tus datos."<<endl;
    cout <<"3 - Areas y perimetros."<<endl;
    cout<<"¿cual eliges?: ";cin>>u;
    
    
    if (u ==1)
    {
        cout<<"Escriba un numero: ";cin>>c;
        cout<<"Escriba otro numero: ";cin>>d;
        suma(c,d);
        resta( c, d);
        multiplicacion(c, d);
        division(c,d);
        raiz(c,d);
    }
    else if(u==2)
    {
        cout<<"Escriba su nombre: ";cin>>e;
        cout<<"Escriba su direccion(pongalo junto): ";cin>>f;
        cout<<"Escriba su edad: ";cin>>g;
        cout<<"Escriba su telefono: ";cin>>h;
        cout<<"Escriba su hobby: ";cin>>o;
    
        nombrec(e);
        direccion( f);
        edad (g);
        telefono (h);
        hobby(o);
    }
    else if(u==3)
    {
        
        cout<<"a -Triangulo."<<endl;
        cout<<"b -Cuadrado."<<endl;
        cout<<"c -Circulo."<<endl;
        cout<<"Elige que quieres hallar: ";cin>>a;
        
        if(a=='c')
        {
            cout<<"Digita el radio del circulo: ";cin>>r;
            circulo(r);
        }
        else if(a=='b')
        {
            cout<<"Digita el lado del cuadrado: ";cin>>s;
            cua(s);
        }
        else if(a=='a')
        {
            cout<<"Digita la base  del triangulo: ";cin>>z;
            cout<<"Digita la altura del triangulo: ";cin>>w;
            cout<<"Digita el lado 'a'  del triangulo: ";cin>>m;
            cout<<"Digita el lado 'c' del triangulo: ";cin>>n;
            trian(z,w,m,n);
        }
    }
    
    return 0;
}
