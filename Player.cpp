#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	std::cout << "ÇÃ·¹ÀÌ¾î »ý¼ºµÊ" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "ÇÃ·¹ÀÌ¾î ÆÄ±«µÊ" << std::endl;
}