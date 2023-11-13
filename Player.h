#pragma once
#include <vector>

class FPlayer
{
//다른 개발자 사용하라고 만드는 기능
public:
	//interface
	FPlayer();
	~FPlayer();

	void Move();

	//accessor
	int GetHP()
	{
		return HP;
	}


	void SetHP(int InNewHP)
	{
		if (InNewHP >= 0)
		{
			HP = InNewHP;
		}
	}

//캡슐화(encapsulation)
//만든 사람이 사용하는 기능
private:
	int HP;
};

