#include <iostream>

#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;

int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	delete MyPlayer;

	FSlime* YourSlime = new FSlime();

	YourSlime->Move();

	delete YourSlime;

	FCharacter* MyCharacter = new FCharacter();

	MyCharacter->Move();

	delete MyCharacter;


	FGoblin* YourGoblin = new FGoblin();

	YourGoblin->Move();

	delete YourGoblin;

	return 0;
}