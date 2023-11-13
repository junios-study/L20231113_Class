#pragma once
class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	void Move();

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
protected:
	int HP;
};

/*
*				���		�ٸ� ����� ���
* public :		���		���� ����
* 
* protected :	���		���� �Ұ�
* 
* private :		��� X	���� �Ұ�
*/