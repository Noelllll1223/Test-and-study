#pragma once
#include <iostream>
#include <list>

using namespace std;

void main()
{
	list <int> list1;

	list1.push_back(20);
	list1.push_back(30);

	cout << "»ğÀÔ Å×½ºÆ® 1" << endl;

	list <int> ::iterator iterInsertPos = list1.begin();
	list1.insert(iterInsertpos, 100);
	
	list<int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}
	cout << endl << "»ğÀÔ Å×½ºÆ® 2" << endl;

	iterInsertPos = list1.begin();
	++iterInsertPos;
	list1.insert(iterInsertPos, 2, 200);

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}
	cout << endl << "»ğÀÔ Å×½ºÆ® 3" << endl;

	list<int> list2;
	list2.push_back(1000);
	list2.push_back(2000);
	list2.push_back(3000);

	iterInsertPos = list1.begin();
	list1.insert(++iterInsertPos, list2.begin(), list2.end());

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << "list 1: " << *iterPos << endl;
	}
}