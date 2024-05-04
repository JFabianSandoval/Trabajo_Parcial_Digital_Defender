#pragma once
#include <iostream>
#include "Menush.h"
using namespace std;
using namespace System;

class Transicion {
private:

public:


	Transicion() {

	}
	~Transicion() {}

	void ganasteMatematica() {
		_sleep(1000);
		system("cls");
		Console::SetCursorPosition(29, 15); cout << R"(                           ¡¡ ENHORABUENA !!                        )" << endl;
		Console::SetCursorPosition(29, 15); cout << R"(         RESPONDISTE BIEN LAS PREGUNTAS Y DERROTASTE A OMEGA        )" << endl;
		Console::SetCursorPosition(29, 16); cout << R"(====================================================================)" << endl;
		Console::SetCursorPosition(29, 17); cout << R"(                               GANASTE                              )" << endl;
		Console::SetCursorPosition(29, 18); cout << R"(====================================================================)" << endl;


		Console::ForegroundColor = ConsoleColor::Cyan;


		_sleep(8000);
		exit(0);
	}


};