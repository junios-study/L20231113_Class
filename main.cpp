#include <iostream>

#include "Player.h"

using namespace std;

int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	MyPlayer->SetHP(MyPlayer->GetHP() - 10);



	delete MyPlayer;

	return 0;
}