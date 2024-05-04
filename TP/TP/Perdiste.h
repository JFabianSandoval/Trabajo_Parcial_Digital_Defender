#pragma once
#include "iostream"
#include "Diseños.h"
#include "Menush.h"

using namespace std;
using namespace System;

class CPerdiste
{
private:
	Mapa1* mapas;

public:
	CPerdiste() {
		mapas = new Mapa1();
	}

	~CPerdiste() {
		delete mapas;
	}


	void perdisteTiempo() {
		_sleep(1000);
		system("cls");
		Console::SetCursorPosition(35, 15); cout << R"(           LOS VIRUS INVADIERON A LA COMPUTADORA         )" << endl;
		Console::SetCursorPosition(35, 16); cout << R"(=========================================================)" << endl;
		Console::SetCursorPosition(35, 17); cout << R"(                        PERDISTE                         )" << endl;
		Console::SetCursorPosition(35, 18); cout << R"(=========================================================)" << endl;
		Console::ForegroundColor = ConsoleColor::DarkRed;
		//mapas->tierra();
	//	mapas->sol();
		_sleep(4000);
	}

	
};
