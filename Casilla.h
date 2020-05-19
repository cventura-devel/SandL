#pragma once
#include <string>
class Casilla
{
private:
	int myNumber;
	std::string tipo;
	int valor; //dependiendo del tipo, si por ejemplo valor es 3, y el tipo es S, baja 3 lugares, si es N allí se queda y L sube 3 lugares
public:
	Casilla();
	Casilla(int, std::string, int);
	int getSiguienteCasilla(); //el tablero le pregunta a la casilla a donde debe poner el "token". el jugador le pregunta al tablero
	int getNumeroActual(); //el tablero le pregunta la casilla cual es su numero actual, esto quizas para saber si a ganó
	std::string getTipo();
	int getValor();


};

