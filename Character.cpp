#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	HP = 100;
	std::cout << "������" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "�ı���" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "���������� ���� �����δ�" << std::endl;
}
