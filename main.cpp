#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>
#include <cstdlib>
using namespace std;

int main(){

  //variables a utilizar
  int posicion=0; 
  int dado;

  bool win=false;  

  //iniciar el random con una "semilla"
  srand((unsigned) time(0));

  //ciclo para que el juego no termine hasta que se cumpla la condicion
  do{

    //lectura del ingreso por teclado 
    cout<<"Presiona ENTER para tirar..."<<endl;
    cin.get();

    //generacion de numero random
    dado= 1+ rand()%6;
    cout<<"Dado arroja "<<dado<<endl;

    //asignacion de posicion
    posicion=posicion+dado;
    cout<<"Jugador avanza a cuadro "<<posicion<<endl;

    //condiciones de posicion para las escaleras y serpientes
    switch(posicion){
      case 3:
      posicion=11;
      cout<<"Jugador sube por escalera al cuadro "<<posicion<<endl;
      break;
      case 6:
      posicion=17;
      cout<<"Jugador sube por escalera al cuadro "<<posicion<<endl;
      break;
      case 9:
      posicion=18;
      cout<<"Jugador sube por escalera al cuadro "<<posicion<<endl;
      break;
      case 10:
      posicion=12;
      cout<<"Jugador sube por escalera al cuadro "<<posicion<<endl;
      break;

      case 14:
      posicion=4;
      cout<<"Jugador desciende al cuadro al cuadro "<<posicion<<endl;
      break;

      case 19:
      posicion=8;
      cout<<"Jugador desciende al cuadro al cuadro "<<posicion<<endl;
      break;

      case 22:
      posicion=20;
      cout<<"Jugador desciende al cuadro al cuadro "<<posicion<<endl;
      break;

      case 24:
      posicion=16;
      cout<<"Jugador desciende al cuadro al cuadro "<<posicion<<endl;
      break;
      case 25:
      cout<<"Jugador supera el cuadro 25"<<endl<<"Fin."<<endl;
      win=true;
      break;

    }
    
    //condicion para que el juego no termine hasta que la posicion exacta sea 25
    if(posicion>25){
      posicion=(posicion-dado)+(25-posicion);
      cout<<"Jugador supero el cuadro 25, se devuelve a la casilla "<<posicion<<endl;
    }

  }while(win!=true);



}

