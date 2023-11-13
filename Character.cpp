#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	HP = 100;
	std::cout << "Ä³¸¯ÅÍ »ý¼ºµÊ" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "Ä³¸¯ÅÍ ÆÄ±«µÊ" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "Çü·ÄÀÌÇÑÅ× »æ¶â°í ¿òÁ÷ÀÎ´Ù" << std::endl;
}
