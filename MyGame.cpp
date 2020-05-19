#include "MyGame.h"

void MyGame::start()
{
	//crear el dado
	Dice dado;

	//crear el tablero
	Tablero tablero;

	//crear los jugadores, arreglo de dos jugadores
	Jugador jugadores[2]={Jugador("1",1),Jugador("2",1) };

	int turno = 1;
	int valor = 0;
	int contadorDeTurnosParaImpresion = 1;

	do
	{
		turno = !turno;
		
		int valorActualDado = dado.getRandomNumber();

		std::cout << contadorDeTurnosParaImpresion << " " << jugadores[turno].getNombre() << " " << jugadores[turno].getPosicion() << " " << valorActualDado << " ";

		int posicionActualJugadorEnTurn = jugadores[turno].getPosicion();
		
		if (valorActualDado + posicionActualJugadorEnTurn >= 30)
			break;
		
			
		Casilla casilla = tablero.getCasilla(valorActualDado + posicionActualJugadorEnTurn - 1);
		if (casilla.getTipo() == "L")
		{
			std::cout << "L" ;
			valor = casilla.getValor();
		}
		else if (casilla.getTipo() == "S")
		{
			std::cout << "S";
			valor = casilla.getValor() * -1;
		}
		else {
			std::cout << "N" ;
			valor = 0;
		}
		
		std::cout << " " << posicionActualJugadorEnTurn + valorActualDado + valor << std::endl;
		jugadores[turno].setPosicion(posicionActualJugadorEnTurn + valorActualDado +valor);

		

	} while (jugadores[turno].getPosicion() < 30 );

	std::cout << "Ganador: " << jugadores[turno].getNombre();
	
	//aqui debe existir un ciclo que diga, que mientras no exista un ganador 
	//do while no ganador , o sea, mientras no exista alguien en la casilla 30 o superior
		//ver quien está en turno
		//jugador tira dado y recibe el numero
	    //jugador recibe el numero del dado y le dice al tablero donde caera
		//tablero en base a la N o S o L dice donde cae y le dice al jugador su posicion actual
	//se cierra el do while



}
