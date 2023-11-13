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
	//STL, Container
	vector<int> IntArray;
	IntArray.push_back(1);
	IntArray.push_back(2);
	IntArray.push_back(3);

	IntArray.erase(find(IntArray.begin(), IntArray.end(), 2));

	auto FindValue = find(IntArray.begin(), IntArray.end(), 2);
	

	//for (auto i = IntArray.rbegin(); i != IntArray.rend(); ++i)
	for (auto Value : IntArray)
	{
	}

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);
	for (auto Value : IntList)
	{
		cout << Value << endl;
	}
	for (list<int>::reverse_iterator i = IntList.rbegin(); i != IntList.rend(); ++i)
	{
		cout << *i << endl;
	}




	//vector<FPlayer*> Player;
	//Player.push_back(new FPlayer());

	//vector<FSlime*> Slimes;
	//Slimes.push_back(new FSlime());

	//vector<FBoar*> Boars;
	//Boars.push_back(new FBoar());

	//vector<FGoblin*> Goblins;
	//Goblins.push_back(new FGoblin());

	return 0;
}