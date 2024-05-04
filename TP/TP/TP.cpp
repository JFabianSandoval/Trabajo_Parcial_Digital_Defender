#include "pch.h"
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include "Heroes.h"
//#include "Enemigos.h"
#include "Diseños.h"
#include "Menush.h"
#include "Perdiste.h"

/*ANCHO DE LA PANTALLA*/
#define WIDHT 120
/*ALTO DE LA PANTALLA*/
#define HEIGHT 80
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75


using namespace std;
using namespace System;





int main()
{



    /*variables*/


    double t = 200.90;
    Menu* menu = new Menu();
  
    Proyectil* proyectil = new Proyectil();
    Mapa1* mapa1 = new Mapa1();
    Aliados* aliados = new Aliados();
    CPerdiste* perdiste = new CPerdiste();

    setlocale(LC_ALL, "spañish");
    menu->portada();
    system("cls");



    while (true) {
        Console::ForegroundColor = ConsoleColor::Cyan;
        mapa1->mapa1();
        

        aliados->mostrarALIADOS();
        //mostrar

        while (true) {
            char tecla;
            
            proyectil->dibujarProyectilabajo();
            if (kbhit()) {
                tecla = getch();
                proyectil->mover(tecla);
            }

         

            
               Console::SetCursorPosition(20, 18); cout << "TIEMPO: " << t;
               t = t - 0.3;

               if (t < 0) {
                   perdiste->perdisteTiempo();
                   system("cls");
                   break;
               }
               _sleep(25);
             
            
        }
    }
}





