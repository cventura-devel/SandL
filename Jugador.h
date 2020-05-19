#pragma once
#include <string>
class Jugador
{
private:
	std::string nombre;
	int posicion;

public: 
	Jugador(std::string, int);
	void setPosicion(int);
	int getPosicion();
	std::string getNombre();





};

