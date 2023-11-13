#pragma once
#include <vector>

class FPlayer
{
//�ٸ� ������ ����϶�� ����� ���
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

//ĸ��ȭ(encapsulation)
//���� ����� ����ϴ� ���
private:
	int HP;
};

