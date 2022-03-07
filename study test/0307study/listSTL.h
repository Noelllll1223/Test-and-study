#pragma once
#include <iostream>
#include <list>
using namespace std;

struct Item {
	Item(int itemCd, int buyMoney)
	{
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}
	int ItemCd;
	int BuyMoney;
};

