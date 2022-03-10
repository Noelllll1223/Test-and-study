#pragma once
#include <map>
#include <string>
#include <iostream>

using namespace std;

struct Item
{
	char Name[32];
	char Kind;
	int BuyMoney;
	int Skillcd;
};

int mapstudy()
{
	multimap< int, Item > Items;
	multimap< int, Item >::iterator IterPos;
	typedef pair< int, Item> ItemPair;

	Item Item1;
	strncpy_s(Item1.Name, "��Į", 32);
	Item1.Kind = 1; Item1.BuyMoney = 200; Item1.Skillcd = 0;

	Item Item2;
	strncpy_s(Item2.Name, "�������� ����", 32);
	Item2.Kind = 2; Item2.BuyMoney = 1000; Item2.Skillcd = 4;

	Item Item3;
	strncpy_s(Item3.Name, "�ظ�", 32);
	Item3.Kind = 1; Item3.BuyMoney = 500; Item3.Skillcd = 0;

	Items.insert(multimap<int, Item>::value_type(Item2.BuyMoney, Item2));
	Items.insert(ItemPair(Item1.BuyMoney, Item1));

	if (false == Items.empty())
	{
		cout << "����� ������ ����- " << Items.size() << endl;
	}

	for (IterPos = Items.begin(); IterPos != Items.end(); ++IterPos)
	{
		cout << "�̸�: " << IterPos->second.Name << ", ����: " << IterPos->second.BuyMoney << endl;
	}
	/*
	IterPos = Items.find("��Į"); // Name �κ��� const char�� ���� �Ǿ� �փ������� �۵� �Ұ���
	if (IterPos != Items.end())
	{
		cout << "������'��Į'�� �����ϴ�." << endl;
	}
	cout << endl;
	*/
	cout << "������ ���� ���������� �����Ǿ� �ִ� map(Key �ڷ������� string ���)" << endl;

	multimap<int, Item, greater<int>>Items2;
	multimap<int, Item, greater<int>>::iterator IterPos2;1

	Items2.insert(multimap<int, Item>::value_type(Item2.BuyMoney, Item2));
	Items2.insert(ItemPair(Item1.BuyMoney, Item1));
	Items2.insert(ItemPair(Item3.BuyMoney, Item3));

	for (IterPos2 = Items2.begin(); IterPos2 != Items2.end(); ++IterPos2)
	{
		cout << "����: " << IterPos2->second.BuyMoney << ", �̸� : " << IterPos2->second.Name<< endl;
	}
	cout << endl;

	cout << "�ظ��� ������ ��?";
	IterPos2 = Items2.find(500);
	if (IterPos2 != Items2.end()) {
		cout << IterPos2->second.BuyMoney << endl;
	}
	else {
		cout << "�ظӴ� �����ϴ�." << endl;
	}
	cout << endl;

	IterPos2 = Items2.find(1000);
	if (IterPos2 != Items2.end()) {
		Items2.erase(IterPos2);

	}

	cout << "Items2�� �ִ� ������ ����: " << Items2.size() << endl;
	return 0;
}