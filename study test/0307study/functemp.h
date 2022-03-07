#pragma once
#include <stdio.h>

void swap(int& a, int& b)
{
	int t;
	t = a; a = b; b = t;
}

void swap(double& a, double& b)
{
	double t;
	t = a; a = b; b = t;
}