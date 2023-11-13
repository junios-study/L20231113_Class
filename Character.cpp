#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	HP = 100;
	std::cout << "»ý¼ºµÊ" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "ÆÄ±«µÊ" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "Çü·ÄÀÌÇÑÅ× »æ¶â°í ¿òÁ÷ÀÎ´Ù" << std::endl;
}
