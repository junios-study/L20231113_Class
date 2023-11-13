#include <iostream>

#include "Player.h"
#include "Goblin.h"

using namespace std;

int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	MyPlayer->SetHP(MyPlayer->GetHP() - 10);

	delete MyPlayer;

	FGoblin* YourGoblin = new FGoblin();

	YourGoblin->Move();

	YourGoblin->SetHP(YourGoblin->GetHP() - 10);

	delete YourGoblin;

	return 0;
}