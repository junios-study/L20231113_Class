#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	Items.clear();
	std::cout << "»ý¼ºµÊ" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "ÆÄ±«µÊ" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "¿òÁ÷ÀÎ´Ù" << std::endl;
}