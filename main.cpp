#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

using namespace std;



int main()
{
	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	Characters.push_back(new FSlime());
	Characters.push_back(new FSlime());
	Characters.push_back(new FSlime());
	Characters.push_back(new FSlime());
	Characters.push_back(new FSlime());
	Characters.push_back(new FBoar());
	Characters.push_back(new FBoar());
	Characters.push_back(new FBoar());
	Characters.push_back(new FBoar());
	Characters.push_back(new FGoblin());
	Characters.push_back(new FGoblin());
	Characters.push_back(new FGoblin());

	for (auto Character : Characters)
	{
		Character->Move();
	}


	return 0;
}