#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	HP = 100;
	std::cout << "�÷��̾� ������" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "�÷��̾� �ı���" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "�÷��̾� ";
	FCharacter::Move();

}
