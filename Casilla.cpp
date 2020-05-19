#include "Casilla.h"

Casilla::Casilla()
{
	myNumber = 0;
	tipo = "";
	valor = 0;
}

Casilla::Casilla(int num, std::string tip, int val)
{
	myNumber = num;
	tipo = tip;
	valor = val;

}

int Casilla::getSiguienteCasilla()
{
	return 0;
}

int Casilla::getNumeroActual()
{
	return 0;
}

std::string Casilla::getTipo()
{
	return tipo;
}

int Casilla::getValor()
{
	return valor;
}
