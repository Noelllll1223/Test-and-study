#pragma once
#include <iostream>
#include <list>
using namespace std;


void eraselist()
{
	list < int > list1;

	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	list <int>::iterator iterPos = list1.begin();
	while (iterPos != list1.end())
	{
		if (0 == (*iterPos % 3))
		{
			iterPos = list1.erase(iterPos);
			continue;
		}
		cout << "list1 : " << *iterPos << endl;
		++iterPos;
	}
}
/*void eraselist()
{
	list < int > list1;
	
	list1.push_back(10);
	list1.push_back(20);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	cout << "erase 테스트 1" << endl;

	list1.erase(list1.begin());
	list <int>::iterator iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << " list 1: " << *iterPos << endl;
	}

	cout << endl << "erase 테스트 2" << endl;

	list<int>::iterator iterPos = list1.begin();
	++iterPos;
	list1.erase(iterPos, list1.end());

	iterEnd = list1.end();
	for (list<int>::iterator iterPos = list1.begin();
		iterPos != iterEnd;
		++iterPos)
	{
		cout << "list 1 : " << *iterPos << endl;
	}
}
*/