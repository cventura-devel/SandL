#include "Dice.h"

Dice::Dice()
{
	srand((int)time(0));
}

int Dice::getRandomNumber()
{
	
	return rand() % 6 + 1;

}
