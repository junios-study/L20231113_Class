#pragma once
class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	virtual void Move();

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