#include "Jugador.h"

Jugador::Jugador(std::string nom, int pos)
{
	nombre = nom;
	posicion = pos;
}

void Jugador::setPosicion(int pos)
{
	posicion = pos;
}

int Jugador::getPosicion()
{
	return posicion;
}

std::string Jugador::getNombre()
{
	return nombre;
}
