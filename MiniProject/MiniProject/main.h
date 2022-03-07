#pragma once
#include "Unit.h"
#include "screen.h"
#include "input.h"


int start() {
	starting s(10, 5);
	s.Name();
	starting e(0, 0);
	e.End();
	starting g(15, 7);
	g.mainguide();
	return 0;
}

int input() {
	int ch;
	ch = _getch();
	inputin s(ch);
	s. inexit();
	return 0;
}