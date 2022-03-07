#pragma once
#include <stdio.h>

template <typename T, int N>
class Array {
private:
	T ar[N];

public:
	void SetAt(int n, T v) { if (n < N && n >= 0) ar[n] = v; }
	T GetAt(int n) { return(n < N&& n >= 0 ? ar[n] : 0); }
};