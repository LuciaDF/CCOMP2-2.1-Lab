//
//  main.cpp
//  Examen Parcial Práctico
//
//  Created by Jorge Dueñas on 5/18/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//

#include <iostream>
 
char iter='1';
//int m;
int f=10,c=10;
int matriz[10][10];

int a=0,b=0,d=0;
int i=0,j=0;

using namespace std;

int rango_cero(){
     for(i=0;i<f;i++){
         for( j=0;j<c;j++){
             cout<<matriz[i][j]<<"  ";
         }
         cout<<endl;
     }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
     return 0;
 }

int rango(){
    
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            matriz[i][j]= rand()%99;
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
}


int newvalue(){
    int a=0,b=0,d=0;
    cout<<"ingrese fila: ";cin>>a;
    cout<<"ingrese columna: ";cin>>b;
    cout<<"Ingrese nuevo valor a cambiar: ";cin>>d;
    for(i=1;i<f;i++){
        for(j=1;j<c;j++){
            matriz[i][j]=rand()%90;
            if(i==a and j==b){
                matriz[i][j]=d;
            }
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
    
}


int diagonal(){
    for(i=1;i<f;i++){
        for(j=1;j<c;j++){
            matriz[i][j]= rand()%99;
            if(i==j){
                matriz[i][j]=0;
            }
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
    
    
}

int buscarnum(){
    int a=0,b=0,z=0,d=0,e=0,g=0;
    cout<<"Ingrese 3 numeros(0 -99): ";cin>>a;cin>>b;cin>>z;
    while(a){
        if(a<0){
            cout<<"Ingrese un numero mayor a 0."<<endl;
            break;
        }
        else if(a>99){
            cout<<"Ingrese un numero menor a 99."<<endl;
            break;
        }
    }
    
    while(b){
        if(b<0){
            cout<<"Ingrese un numero mayor a 0."<<endl;
            break;
            
        }
        else if(b>99){
            cout<<"Ingrese un numero menor a 99."<<endl;
            //abort();
            break;
              
        }
    }
    
    while(z){
        if(z<0){
            cout<<"Ingrese un numero mayor a 0."<<endl;
            break;
                
        }
        else if(z>99){
            cout<<"Ingrese un numero menor a 99."<<endl;
            //abort();
            break;
        }
    }
    
    for(i=1;i<f;i++){
        for(j=1;j<c;j++){
            
            matriz[i][j]=rand()%99;
            
            if(matriz[i][j]==a){
                d++;
                //cout<<"Veces encontradas: "<<d<<endl;
            }
            if(matriz[i][j]==b){
                e++;
                //cout<<"Veces encontradas: "<<e<<endl;
                
            }
            if(matriz[i][j]==z){
                g++;
                //cout<<"Veces encontradas: "<<g<<endl;
                
            }
            cout<<matriz[i][j]<<"  ";
                
        }
        cout<<endl;
    }
    //cout<<endl;
    cout<<"Veces encontradas de "<<a<<": "<<d<<endl;
    cout<<"Veces encontradas: "<<b<<": "<<e<<endl;
    cout<<"Veces encontradas: "<<z<<": "<<g<<endl;
    cout<<endl;
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
}


int busca_reemp(){
    int u,n;
    cout<<"Ingrese un numero(0 -99): ";cin>>u;
    
    cout<<"Ingrese un numero a cambiar (100 -200): ";cin>>n;
    
     
    if(u<0){
        cout<<"Ingrese un numero mayor a 0."<<endl;
         
         
    }
    else if(u>99){
        cout<<"Ingrese un numero menor a 99."<<endl;
        abort();
    }
     
    if(n<100){
        cout<<"Ingrese un numero mayor a 100."<<endl;
         
    }
    else if(n>200){
        cout<<"Ingrese un numero menor a 200."<<endl;
        abort();
    }
     
    
    for(i=1;i<f;i++){
        for(j=1;j<c;j++){
            matriz[i][j]= rand()%99;
            if(matriz[i][j]==u){
                matriz[i][j]=n;
            }
            cout<<matriz[i][j]<<"  ";
            
        }
        cout<<endl;
    }
    if(matriz[i][j]!=u){
        cout<<"No se encuentra el numero."<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
}


int matriz5()
{
    int n;
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            matriz[i][j]= rand()%99;
            if(matriz[i][j]%5==0){
                n=matriz[i][j]*10;
                cout<<n<<"* ";
            }
            else{
                cout<<matriz[i][j]<<"  ";
            }
        }
    
        cout<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;
}


int invertirm(){
    
     
    int wn=0;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            matriz[i][j]= rand()%99;
            cout<<matriz[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            wn= rand()%99;
            cout<<matriz[j][i]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Opciones:"<<endl;
    cout<<"(1)Volver a Menu"<<endl;
    cout<<"(0)terminar"<<endl;
    cout<<"¿Cual eliges?";cin>>iter;
    return 0;

  
}

int main(int argc, const char * argv[]) {

    
    while(iter!='0'){
        int m;
        cout<<"***** MENU - MATRIX ******"<<endl;
        cout<<"Alumna: Lucia dueñas Flores"<<" - "<<"CCOMP2- 2.1"<<endl;
        cout<<"Menu: "<<endl;
        cout<<"1.- Mostrar matriz inicializada."<<endl;
        cout<<"2.- Mostrar matriz."<<endl;
        cout<<"3.- Mostrar matriz(fila - columna)."<<endl;
        cout<<"4.- Matriz diagonal 0"<<endl;
        cout<<"5.- Buscar elementos de matriz"<<endl;
        cout<<"6.- Buscar y reemplazar"<<endl;
        cout<<"7.- Buscar multiplos de 5 en la matriz"<<endl;
        cout<<"8.- Invertir matriz"<<endl;
        cout<<"Escoga las siguientes funciones(escoge el numero): ";cin>>m;
        
        switch(m)
        {
            case 1: cout<<rango_cero()<<endl;
            break;
            case 2: cout<<rango()<<endl;
            break;
            case 3: cout<<newvalue()<<endl;
            break;
            case 4: cout<<diagonal()<<endl;
            break;
            case 5: cout<<buscarnum()<<endl;
            break;
            case 6: cout<<busca_reemp()<<endl;
            break;
            case 7: cout<<matriz5()<<endl;
            break;
            case 8: cout<<invertirm()<<endl;
            break;
                    
        
    }
    }
   
}
