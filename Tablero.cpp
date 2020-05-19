#include "Tablero.h"

Tablero::Tablero():
	casillas {
		Casilla(1,"N",0),
		Casilla(2,"N",0),
		Casilla(3,"N",0), 
		Casilla(4,"L",3),
		Casilla(5,"N",0),
		Casilla(6,"N",0),
		Casilla(7,"N",0),
		Casilla(8,"N",0),
		Casilla(9,"N",0),
		Casilla(10,"L",3),
		Casilla(11,"N",0),
		Casilla(12,"L",3),
		Casilla(13,"N",0),
		Casilla(14,"N",0),
		Casilla(15,"N",0),
		Casilla(16,"N",0),
		Casilla(17,"N",0),
		Casilla(18,"N",0),
		Casilla(19,"S",3),
		Casilla(20,"N",0),
		Casilla(21,"N",0),
		Casilla(22,"N",0),
		Casilla(23,"L",3),
		Casilla(24,"S",3),
		Casilla(25,"N",0),
		Casilla(26,"N",0),
		Casilla(27,"N",0),
		Casilla(28,"N",0),
		Casilla(29,"N",0),
		Casilla(30,"N",0)
	}
{
}


Casilla Tablero::getCasilla(int index)
{
	return casillas[index];
}
