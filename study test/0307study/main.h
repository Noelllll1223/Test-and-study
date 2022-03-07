#pragma once
#include "functemp.h"
#include "classtemp.h"
#include "TempMember.h"
#include "NonType.h"
#include "listSTL.h"
#include "erase.h"
#include "stack.h"

int swaper() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	swap(a, b);
	swap(c, d);
	printf("a=%d, b=%d\n", a, b);
	printf("c=%f, d=%f\n", c, d);
	return 0;
}

int classs() {
	PosValue<int> iv(10, 10, 2);
	PosValue<char> cv(25, 5, 'C');
	PosValue <double> dv(30, 15, 3.14);

	iv.outvalue();
	cv.outvalue();
	dv.outvalue();
	return 0;
}

int temp() {
	Util u;
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	char e = 'e', f = 'f';

	u.swap(a, b);
	u.swap(c, d);
	u.swap(e, f);
	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
	printf("e = %c, f = %c\n", e, f);
	return 0;
}

int Typee() {
	Array<int, 5> ari;
	ari.SetAt(1, 1234);
	ari.SetAt(1000, 5678);
	printf("%d\n", ari.GetAt(1));
	printf("%d\n", ari.GetAt(5));
	return 0;
}	

void ITem()
{
	list <Item> Itemlist;

	Item item1(1, 2000);
	Itemlist.push_front(item1);

	Item item2(2, 1000);
	Itemlist.push_front(item2);

	Item item3(3, 3000);
	Itemlist.push_back(item3);

	Item item4(4, 4500);
	Itemlist.push_back(item4);

	list<Item>::iterator iterEnd = Itemlist.end();
	for (list<Item>::iterator iterPos = Itemlist.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << "아이템 코드 : " << iterPos->ItemCd << endl;
	}

	Itemlist.pop_front();

	Item front_item = Itemlist.front();
	cout << "아이템 코드 : " << front_item.ItemCd << endl;

	Itemlist.pop_back();

	Item back_item = Itemlist.back();
	cout << "아이템 코드 : " << back_item.ItemCd << endl;

	if (false == Itemlist.empty()) {
		list <Item>::size_type Count = Itemlist.size();
		cout << "남아 있는 아이템 개수: " << Count << endl;
	}

	Itemlist.clear();
		list <Item> ::size_type Count = Itemlist.size();
	cout << "남아 있는 아이템 개수: " << Count << endl;
}

void stac()
{
	Stack< int > Int_Stack;

	Int_Stack.SetInOutType(true);
	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);
	int Value = 0;
	Int_Stack.pop(&Value);
	cout << "LIFO pop : " << Value << endl << endl;
	Int_Stack.Clear();

	Int_Stack.SetInOutType(false);
	Int_Stack.push(10);
	Int_Stack.push(20);
	Int_Stack.push(30);
	Int_Stack.pop(&Value);
	cout << "FIFO pop : " << Value << endl << endl;

}