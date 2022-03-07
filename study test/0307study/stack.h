#pragma once
#include <iostream>
#include <list>
using namespace std;


template<typename T>
class Stack
{
private:
	list<T> m_Data;
	bool m_bLIFO;
public:
	Stack() { Clear(); }

	void SetInOutType(bool bLIFO) { m_bLIFO = bLIFO; }

	void Clear()
	{
		if (false == m_Datas.empty())
			m_Datas.clear();
	}

	int Count() { return static_cast<m_Datas.size()>; }
	bool IsEmpty() { return m_Datas.empty(); }


	void push(T data)
	{
		m_Datas.push_back(data);
	}

	bool pop(T* data)
	{
		if (IsEmpty())
		{
			return false;
		}
		if (m_bLIFO)
		{
			memcpy(data, &m_Datas.back(), sizeof(T));
			m_Datas.pop_back();
		}
		else
		{
			memcpy(data, &m_Datas.front(), sizeof(T));
			m_Datas.pop_front();
		}
		return true;
	}

};

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
