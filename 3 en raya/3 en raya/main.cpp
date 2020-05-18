 //
 //  main.cpp
 //  3 en raya
 //
 //  Created by Jorge Dueñas on 4/23/20.
 //  Copyright © 2020 lucia Dueñas. All rights reserved.
 //
 
 #include <iostream>
 #include "libraya.hpp"
 using namespace std;
 
 
   int main() {
     
       int jugador = 1;
       int i=0;
       int opcion=0;
       char ficha=0;
       char c1=cuad[1],c2=cuad[2],c3=cuad[3],c4=cuad[4],c5=cuad[5],c6=cuad[6],c7=cuad[7],c8=cuad[8],c9=cuad[9];
       
       do {
           tablero();
           jugador = (jugador%2)?1:2;
 
           cout << "Jugador " << jugador << ", introduce una posición: ";
           cin >> opcion;
 
           ficha=(jugador == 1) ? 'X' : 'O';
 
           if (opcion == 1 and c1 == '1') {// posicion que escribe el jugador
               c1 = ficha;
           }
           else if (opcion == 2 and c2 == '2') {
               c2 = ficha;
           }
           else if (opcion == 3 and c3 == '3') {
           }
           else if (opcion == 4 and c4 == '4') {
               c4 = ficha;
           }
           else if (opcion == 5 and c5 == '5') {
               c5 = ficha;
           }
           else if (opcion == 6 and c6 == '6') {
               c6 = ficha;
           }
           else if (opcion == 7 and c7 == '7') {
               c7 = ficha;
           }
           else if (opcion == 8 and c8 == '8'){
              c8 = ficha;
           }
           else if (opcion == 9 and c9 == '9') {
               c9 = ficha;
           }
           else {
               cout << "No puede escribir la misma posición que el anterior jugador ";
 
               jugador--;
               cin.ignore();
               cin.get();
           }
           i=ganar(); // ver si gano el jugador
 
           jugador++;
       }
       while(i==-1);
       
       tablero();
       if(i==1) {
           cout << "Jugador ganador:  " << --jugador;
       }
       else {
           cout << "Los dos ganaron, pulse de nuevo para una revancha.:)";
       }
       cout << endl << endl;
       
       system ("pause");
        
       
       return 0;
   }
 
 
  /*
    void Maquina(char square[10] = {'o','1','2','3','4','5','6','7','8','9'} ){
        
        int i;
        int j;
         
        int k;
        
      
        
        do{
            
            i= rand()%3;
            j=rand()%3;
            
            k=0;
            
            if(square[i][j]=='X' || square[i][j]=='O'){
                
                k=1;
            }else{
                tablero[i][j]='O';
            }
        }while(k==1);
        
    }
      
     */
      

