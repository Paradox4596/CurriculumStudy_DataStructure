#pragma once

#include "Monster.h" // �츮�� ���� ž��� ������ ū����ǥ�� ��

struct MonsterList
{
	// ������ �������� �ƴ°� �߿�, ���� �˸� �� ����
	Monster* pHead{};
	Monster* pTail{};
};

// Create

Monster* CreateMonster(MonsterList& list, const char* name, const int hp); //const ���� ����: �ٲ����� ����

// Count
int GetMonsterCount(const MonsterList& list); // const ��� ���������.. ������ �ٲ��� �ʴ´ٴ°� �������ִ� ȿ��

// Print
void PrintMonsters(const MonsterList& list);
void PrintMonstersR(Monster* pMonster); // �Լ������ε��̶� R�� �Ƚᵵ ����

// Search
Monster* FindMonster(const MonsterList& list, const char* name);

// Delete All
void DeleteAll(MonsterList& list);

// Delete Element
bool DeleteMonster(MonsterList& list, const char* name); // void�� ���� ����� ���µ� �˷��ִ°� Ȱ�뵵�� �����״� bool