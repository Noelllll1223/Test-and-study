#pragma once
#include <stdio.h>

namespace A {
	double value;
}

namespace B {
	int value;
}

int Nsname() {
	using namespace A;
	using namespace B;

	value = 3;
}