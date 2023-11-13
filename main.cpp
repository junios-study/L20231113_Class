#include <iostream>

#include "Player.h"

using namespace std;

int main()
{

	FPlayer* MyPlayer = new FPlayer();


	MyPlayer->Move();


	delete MyPlayer;

	return 0;
}