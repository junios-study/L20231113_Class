#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	HP = 100;
	std::cout << "ĳ���� ������" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "ĳ���� �ı���" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "ĳ���Ͱ� �����δ�" << std::endl;
}
