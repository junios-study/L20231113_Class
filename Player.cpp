#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	Items.clear();
	std::cout << "������" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "�ı���" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "�����δ�" << std::endl;
}