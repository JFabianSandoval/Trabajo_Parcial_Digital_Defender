#pragma once
#include <iostream>
#include <conio.h>
#include <Windows.h>
//#include "Enemigos.h"
#include "Diseños.h"
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75
#define HEIGHT 40
#define WIDTH 20
using namespace std;
using namespace System;


class Aliados {
protected:
    int x, x1, x2, x3, x4, x5;
    int y, y1, y2, y3, y4, y5;

public:
    Aliados() {


    }
    void mostrarALIADOS() {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(22, 24); cout << char(254);
        Console::SetCursorPosition(67, 20); cout << char(254);

        Console::SetCursorPosition(41, 30); cout << char(254);

        Console::SetCursorPosition(37, 35); cout << char(254);

        Console::SetCursorPosition(71, 40); cout << char(254);

        Console::SetCursorPosition(50, 50); cout << char(254);






        Console::ForegroundColor = ConsoleColor::White;
    }
    void mostrarborrarAli() {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(x, y); cout << "    ";

        Console::ForegroundColor = ConsoleColor::White;
    }
};
class Proyectil : public Aliados, public Mapa1, public Preguntastxt {
protected:
    int x = 20, y = 20; // Posición del proyectil
    int dx, dy; // Dirección del proyectil
    bool activo; // Indica si el proyectil está activo o no
    bool puntajeIncr;
    int puntaje;
    Mapa1* mapa;
    Aliados* aliados;
    Preguntastxt* preguntastxt;

public:
    Proyectil() : puntajeIncr(false), puntaje(0) { mapa = new Mapa1; aliados = new Aliados; preguntastxt = new Preguntastxt; }
    ~Proyectil() {}



    void dibujarProyectilderecha() {
        Console::BackgroundColor = ConsoleColor::Black;

        Console::SetCursorPosition(x, y); cout << "|%|";



    }
    void dibujarProyectilabajo() {
        Console::BackgroundColor = ConsoleColor::Black;

        //    Console::SetCursorPosition(x, y + 1); cout << "  |-|";
        Console::SetCursorPosition(x, y); cout << "|%|";

    }
    void dibujarProyectilIZ() {
        Console::BackgroundColor = ConsoleColor::Black;

        Console::SetCursorPosition(x, y); cout << "|%|";


    }
    void dibujarProyectilarriba() {
        Console::BackgroundColor = ConsoleColor::Black;
        Console::SetCursorPosition(x, y); cout << "|%|";


    }

    void borrarProyectil() {
        Console::BackgroundColor = ConsoleColor::Black;
        Console::SetCursorPosition(x, y);
        cout << "   ";
        Console::SetCursorPosition(x, y + 1);
        cout << "   ";
        Console::SetCursorPosition(x, y + 2);
        cout << "   ";
    }
    void mostarPunt(int puntaje) {
        Console::SetCursorPosition(20, 20);
        cout << "Puntaje actual es: " << puntaje << endl;
    }

    void reinciciarPosicion() {
        x = 20, y = 20;
    }
    void mover(char tecla) {
        borrarProyectil();
        //  int puntaje = 0;
        puntajeIncr = false;
        switch (tecla) {
        case ARRIBA:
            if (y > 0) {
                dy = -1;
                y += dy;
                dibujarProyectilarriba(); // Dibuja el proyectil hacia arriba
            }
            break;
        case ABAJO:
            if (y < 60) {
                dy = 1;
                y += dy;
                dibujarProyectilabajo(); // Dibuja el proyectil hacia abajo
            }
            break;
        case DERECHA:
            if (x < 120) {
                dx = 1;
                x += dx;
                dibujarProyectilderecha(); // Dibuja el proyectil hacia la derecha
            }
            break;
        case IZQUIERDA:
            if (x > 0) {
                dx = -1;
                x += dx;
                dibujarProyectilIZ(); // Dibuja el proyectil hacia la izquierda
            }
            break;
        }
        //green
        if (x == 21 && y == 23) {

            puntaje = puntaje + 10;

        }
        if (x == 66 && y == 20) {

            puntaje = puntaje + 10;

        }

        if (x == 40 && y == 30) {

            puntaje = puntaje + 10;

        }

        if (x == 36 && y == 35) {

            puntaje = puntaje + 10;

        }

        if (x == 70 && y == 40) {

            puntaje = puntaje + 10;

        }
        if (x == 48 && y == 50) {

            puntaje = puntaje + 10;

        }




        if (puntaje > 110) {
            Console::SetCursorPosition(50, 50);
            cout << "|||AREA DEFENDIDA|||| ";

            _sleep(200);
            system("cls");
            preguntastxt->funcionalidad();

        }
     
        
        mostarPunt(puntaje);
    }


};