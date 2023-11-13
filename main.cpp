#include <iostream>

#include "Player.h"
#include "Goblin.h"

using namespace std;

int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	delete MyPlayer;

	return 0;
}