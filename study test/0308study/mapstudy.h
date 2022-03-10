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
	strncpy_s(Item1.Name, "긴칼", 32);
	Item1.Kind = 1; Item1.BuyMoney = 200; Item1.Skillcd = 0;

	Item Item2;
	strncpy_s(Item2.Name, "성스러운 방패", 32);
	Item2.Kind = 2; Item2.BuyMoney = 1000; Item2.Skillcd = 4;

	Item Item3;
	strncpy_s(Item3.Name, "해머", 32);
	Item3.Kind = 1; Item3.BuyMoney = 500; Item3.Skillcd = 0;

	Items.insert(multimap<int, Item>::value_type(Item2.BuyMoney, Item2));
	Items.insert(ItemPair(Item1.BuyMoney, Item1));

	if (false == Items.empty())
	{
		cout << "저장된 아이템 개수- " << Items.size() << endl;
	}

	for (IterPos = Items.begin(); IterPos != Items.end(); ++IterPos)
	{
		cout << "이름: " << IterPos->second.Name << ", 가격: " << IterPos->second.BuyMoney << endl;
	}
	/*
	IterPos = Items.find("긴칼"); // Name 부분이 const char로 정의 되어 있깄때문에 작동 불가능
	if (IterPos != Items.end())
	{
		cout << "아이템'긴칼'이 없습니다." << endl;
	}
	cout << endl;
	*/
	cout << "아이템 가격 내림순으로 정열되어 있는 map(Key 자료형으로 string 사용)" << endl;

	multimap<int, Item, greater<int>>Items2;
	multimap<int, Item, greater<int>>::iterator IterPos2;1

	Items2.insert(multimap<int, Item>::value_type(Item2.BuyMoney, Item2));
	Items2.insert(ItemPair(Item1.BuyMoney, Item1));
	Items2.insert(ItemPair(Item3.BuyMoney, Item3));

	for (IterPos2 = Items2.begin(); IterPos2 != Items2.end(); ++IterPos2)
	{
		cout << "가격: " << IterPos2->second.BuyMoney << ", 이름 : " << IterPos2->second.Name<< endl;
	}
	cout << endl;

	cout << "해머의 가격은 얼마?";
	IterPos2 = Items2.find(500);
	if (IterPos2 != Items2.end()) {
		cout << IterPos2->second.BuyMoney << endl;
	}
	else {
		cout << "해머는 없습니다." << endl;
	}
	cout << endl;

	IterPos2 = Items2.find(1000);
	if (IterPos2 != Items2.end()) {
		Items2.erase(IterPos2);

	}

	cout << "Items2에 있는 아이템 개수: " << Items2.size() << endl;
	return 0;
}