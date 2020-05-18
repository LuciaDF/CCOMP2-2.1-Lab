//
//  libraya.cpp
//  3 en raya
//
//  Created by Jorge Dueñas on 5/15/20.
//  Copyright © 2020 lucia Dueñas. All rights reserved.
//
#include <iostream>
#include "libraya.hpp"
using namespace std;


void tablero() {//dibujar tablero
    system("cls");
    cout << "********Tres en raya**********" << endl;
    cout << endl;
    cout << "    Jugador 1  es (X) " << endl  ;
    cout << "    Jugador 2 es (O)   " << endl  ;
    cout << endl;

     
    cout << "     |     |     " << endl;
    cout << "  " << cuad[1] << "  |  " << cuad[2] << "  |  " << cuad[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << cuad[4] << "  |  " << cuad[5] << "  |  " << cuad[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << cuad[7] << "  |  " << cuad[8] << "  |  " << cuad[9] << endl;

    cout << "     |     |     " << endl << endl;
}



int ganar() {
     if (cuad[1] == cuad[2] and cuad[2] == cuad[3]) {
         return 1;
     }
     else if (cuad[4] == cuad[5] and cuad[5] == cuad[6]) {
         return 1;
     }
     else if (cuad[7] == cuad[8] and cuad[8] == cuad[9]) {
         return 1;
     }
     else if (cuad[1] == cuad[4] and cuad[4] == cuad[7]) {
         return 1;
     }
     else if (cuad[2] == cuad[5] and cuad[5] == cuad[8]) {
         return 1;
     }
     else if (cuad[3] == cuad[6] and cuad[6] == cuad[9]) {
         return 1;
     }
     else if (cuad[1] == cuad[5] and cuad[5] == cuad[9]) {
         return 1;
     }
     else if (cuad[3] == cuad[5] and cuad[5] == cuad[7]) {
         return 1;
     }
     else if (cuad[1] != '1' and cuad[2] != '2' and cuad[3] != '3'
and cuad[4] != '4' and cuad[5] != '5' and cuad[6] != '6'
                   and cuad[7] != '7' and cuad[8] != '8' and cuad[9] != '9')

         return 0;
     else
         return -1;
 }

