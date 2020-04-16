//
//  main.cpp
//  ejercicios-lab
//
//  Created by Jorge Dueñas on 4/16/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int a,b;
    cout<<"escriba un numero: ";cin>>a;
    cout<<"escriba otro numero: ";cin>>b;
    if(b!=0){
        cout<<"su division es: "<<a/b<<endl;
    }
    cout<<"su suma es: "<<a+b<<endl;
    cout<<"su resta es: "<<a-b<<endl;
    cout<<"su multiplicacion es: "<<a*b<<endl;
     if(b!=0){
         cout<<"su division es: "<<a/b<<endl;
         cout<<"su resto es: "<<a%b<<endl;
         if(a%b==0){
             cout<<b<<" es divisor de "<<a<<endl;
         }
     }
     else{
         cout<<"no puede dividirse ya que uno de los numeros es 0"<<endl;
     }
    
    if(a<b){
        cout<<"su  numero mayor es: "<<b<<endl;
        cout<<"su numero menor es: "<<a<<endl;
    }
    else {
        cout<<"su numero mayor es: "<<a<<endl;
        cout<<"su  numero menor es: "<<b<<endl;
    }
    
    
    /*
    int a,b;
    char c;

    cout<<"lista de comandos:\n"<<"suma(+)\n"<<"resta(-)\n"<<"multiplicacion(*)\n"<<"division(/)\n"<<"residuo(%)\n"<<"raiz cuadrada(^)\n";
    cout<<"eliga un comando: ";cin>>c;
    
    if(c != '^'){
        cout<<"escriba un numero: ";cin>>a;
        cout<<"escriba otro numero: ";cin>>b;
    }
    else{
        cout<<"escriba un numero: ";cin>>a;
    }
    
    if(c == '+'){
        cout<<"su suma es: "<<a+b<<endl;
    }
    if(c == '-'){
        cout<<"su resta es: "<<a-b<<endl;
    }
    if(c == '*'){
        cout<<"su multiplicacion es: "<<a*b<<endl;
    }
    if(c == '/'){
        cout<<"su  division es: "<<a/b<<endl;
    }
    if(c == '%'){
        cout<<"su  residuo es: "<<a%b<<endl;
    }
    if(c == '^'){
        cout<<"su  raiz cuadrada es: "<<sqrt(a)<<endl;
    }
    
    
    */
    
    
    
    return 0;
    
    
}
