#pragma once
#include <vector>

class FPlayer
{
public:
	FPlayer();
	~FPlayer();

	int HP;

	std::vector<int> Items;

	void Move();
};

