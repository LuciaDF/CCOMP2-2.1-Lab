//
//  libgus.cpp
//  Gusanito
//
//  Created by Jorge Dueñas on 5/15/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//
#include <iostream>
#include "mylib.hpp"

using namespace std;
char arriba='1',abajo='2',izq='3',der='4';

void dibujar(char a,int &b,int &c,int&m, int &o,char t) {
    int choque=0;
    char snake[8][8];
    int f;
    int v;
    int p;
    if(choque>5){
        cout<<"Mas de 5 colisiones, Ustedes han perdido"<<endl;
        cout<<"Vuelva al menu y reinicie el juego"<<endl;
        abort();
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            //int b=7,c=1,m=2,o=4;
            if (i == b and j == c) {
                cout <<" "<< snake[i][j];
                snake[i][j] = '@';
                f=snake[i][j];
                //cout<<i;
                //cout<<j;
                f=snake[i][j];
            }
            else{
              snake[i][j] = '*';
                //cout<<i;
                //cout<<j;
                f=snake[i][j];
              }
            cout <<" "<< snake[i][j];
            if (i == m and j == o) {
                snake[i][j] = '&';
                v= snake[i][j];
                //cout<<i;
                //cout<<j;
                cout <<" "<< snake[i][j];
                
                //v= snake[i][j];
            }
            
            if(f==snake[7][4] and v==snake[7][5]){
                if(a==der){
                    p=b;
                    p--;
                     
                     
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p--;
                     
                    
                    choque++;
                }
                if(a== izq){
                    p=b;
                    p--;
                     
                     
                    choque++;
                }
                else if(t== izq){
                    p=m;
                    p--;
                     
                     
                    choque++;
                }
            }
            if(f==snake[7][0] and v==snake[7][1]){
                if(a==der){
                    p=b;
                    p--;
                    choque++;
                }
                else if(a==izq){
                    p=b;
                    p--;
                    choque++;
                }
                if(t==der){
                    p=m;
                    p--;
                    choque++;
                }
                else if(t==izq){
                    p=m;
                    p--;
                    choque++;
                }
            }
            if(f==snake[7][1] and v==snake[7][2]){
                if(a==der){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p--;
                    choque++;
                }
                if(a== izq){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t== izq){
                    p=m;
                    p--;
                    choque++;
                }
            }
            if(f==snake[7][2] and v==snake[7][3]){
                if(a==der){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p--;
                    choque++;
                }
                if(a== izq){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t== izq){
                    p=m;
                    p--;
                    choque++;
                }
            }
            if(f==snake[7][3] and v==snake[7][4]){
                 if(a==der){
                     p=b;
                     p--;
                     choque++;
                 }
                 else if(t==der){
                     p=m;
                     p--;
                     choque++;
                 }
                 if(a== izq){
                     p=b;
                     p--;
                     choque++;
                 }
                 else if(t== izq){
                     p=m;
                     p--;
                     choque++;
                 }
            }
            if(f==snake[7][5] and v==snake[7][6]){
                if(a==der){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p--;
                    choque++;
                }
                if(a== izq){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t== izq){
                    p=m;
                    p--;
                    choque++;
                }
            }
            if(f==snake[7][6] and v==snake[7][7]){
                if(a==der){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p--;
                    choque++;
                }
                if(a== izq){
                    p=b;
                    p--;
                    choque++;
                }
                else if(t== izq){
                    p=m;
                    p--;
                    choque++;
                }
            }
            if(f==snake[6][0] and v==snake[7][0]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][1] and v==snake[7][1]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][2] and v==snake[7][2]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][3] and v==snake[7][3]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][4] and v==snake[7][4]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][4] and v==snake[7][4]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][5] and v==snake[7][5]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }if(f==snake[6][6] and v==snake[7][6]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][7] and v==snake[7][7]){
                if(a==abajo){
                    p=b;
                    p--;
                    choque++;
                    }
                else if(t==abajo){
                    p=m;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][6] and v==snake[0][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[1][6] and v==snake[1][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[2][6] and v==snake[2][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[3][6] and v==snake[3][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[4][6] and v==snake[4][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[5][6] and v==snake[5][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][6] and v==snake[6][7]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][7] and v==snake[1][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[1][7] and v==snake[2][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[2][7] and v==snake[3][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[3][7] and v==snake[4][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[4][7] and v==snake[5][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[5][7] and v==snake[6][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[6][7] and v==snake[7][7]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p--;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p--;
                    choque++;
                }
            }
            if(f==snake[0][0] and v==snake[0][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[1][0] and v==snake[1][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[2][0] and v==snake[2][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[3][0] and v==snake[3][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[4][0] and v==snake[4][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[5][0] and v==snake[5][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][0] and v==snake[6][1]){
                if(a==der){
                    p=b;
                    p++;
                    choque++;
                }
                else if(t==der){
                    p=m;
                    p++;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][0] and v==snake[1][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[1][0] and v==snake[2][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[2][0] and v==snake[3][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[3][0] and v==snake[4][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[4][0] and v==snake[5][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[5][0] and v==snake[6][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[6][0] and v==snake[7][0]){
                if(a==abajo){
                    p=c;
                    p++;
                    choque++;
                }
                if(t==abajo){
                    p=o;
                    p++;
                    choque++;
                }
                if(t== arriba){
                    p=m;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=b;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][2] and v==snake[1][2]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][3] and v==snake[1][3]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][4] and v==snake[1][4]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][5] and v==snake[1][5]){
                if(a==abajo){
                    p=c;
                    p--;
                    choque++;
                }
                else if(t==abajo){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== arriba){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== arriba){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][2] and v==snake[0][3]){
                if(a==der){
                    p=c;
                    p--;
                    choque++;
                }
                if(t==der){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][3] and v==snake[0][4]){
                if(a==der){
                    p=c;
                    p--;
                    choque++;
                }
                if(t==der){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
            if(f==snake[0][4] and v==snake[0][5]){
                if(a==der){
                    p=c;
                    p--;
                    choque++;
                }
                if(t==der){
                    p=o;
                    p--;
                    choque++;
                }
                if(t== izq){
                    p=o;
                    p++;
                    choque++;
                }
                else if(a== izq){
                    p=c;
                    p++;
                    choque++;
                }
            }
             
            
        }
        cout<<endl;
       
            
            /*
            else{
                snake[i][j] = '+';
                cout<<i;
                cout<<j;
            }
             cout <<" "<< snake[i][j];
            */
        }
        cout<<endl;
     //1
    
        
        
        
        
        
        
        
    //2
    /*
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == m and j == o) {
                snake[i][j] = '&';
            }
            else{
                snake[i][j] = '+';
            }
            
            cout <<" "<< snake[i][j];
    }
        cout<<endl;
    }*/
    cout<<"'1'es ARRIBA"<<endl;
    cout<<"'2'es ABAJO"<<endl;
    cout<<"'3'es IZQUIERDA"<<endl;
    cout<<"'4'es DERECHA"<<endl;
    cout << "Ingrese movimiento jugador 1 '@': ";cin >> a;
    cout << "Ingrese movimiento jugador 2 '&': ";cin >> t;
    
    if (a == arriba) {
        b--;
        
    }
    else if (a == abajo) {
        b++;
    }
    if (a == izq) {
        c--;
    }
    else if (a == der) {
        c++;
    }

    if (t == arriba) {
        m--;
    }
    else if (t == abajo) {
        m++;
    }
    
    if (t == izq) {
        o--;
    }
    
    else if (t == der) {
        o++;
    }
    
    
    
    
    
    if(a<4){
        cout<<"Solo escriba los numeros indicados en pantalla."<<endl;
        cout<<"Reinicie el juego"<<endl;
        abort();
    }
    if(t<4){
        cout<<"Solo escriba los numeros indicados en pantalla."<<endl;
        cout<<"Reinicie el juego"<<endl;
        abort();
    }
        
}

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
      /*
    }
   
    if (a == arriba) {
        b--;
        
    }
    else{
        cout<<"<tiene que poner el numero designido"<<endl;
        return;
    }
    if (a == abajo) {
        b++;
    }
    if (a == der) {
        c--;
    }
    if (a == izq) {
        c++;
    }
    
    if (t == arriba) {
        m--;
        
    }
    
    if (t == abajo) {
        m++;
    }
    
    if (t == der) {
        o--;
    }
    
    if (t == izq) {
        o++;
    }
       
       for(a=0;a <4;a++){
       if(a== teclas[0]){
           b--;
       }
       if (a == teclas[1]) {
           b++;
       }
       if (a == teclas[2]) {
           c--;
       }
       if (a == teclas[3]) {
           c++;
       }
       
       if (t == teclas[0]) {
           m--;
           
       }
       
       if (t == teclas[1]) {
           m++;
       }
       
       if (t == teclas[2]) {
           o--;
       }
       
       if (t == teclas[3]) {
           o++;
       }
}
*/
