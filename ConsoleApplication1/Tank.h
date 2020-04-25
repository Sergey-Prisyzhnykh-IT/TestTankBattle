#pragma once
using namespace std;
#include <string>

class Tank
{
private:
	string name;
	int hp;
	int damage;
public:
	Tank() //����������� �� ���������
	{
		name = "Tank";
		hp = 100;
		damage = 10;
	}

	Tank(string name, int hp, int damage) //�����������
	{
		this->name = name;
		this->hp = hp;
		this->damage = damage;
	}

	void SetHP(int damage) //��������� ����� ������
	{
		this->hp -= damage;
	}
	
	int GetHP()
	{
		return hp;
	}
	int GetDamage()
	{
		return damage;
	}
	string GetName()
	{
		return name;
	}

};