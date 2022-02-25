#include <stdio.h>
#include <cursor.h>
#include <conio.h>
#include "main.h"


int main(){

	
	
	preparestage();
	findMypositin();
	clearScreen();
	gameLoop();
	gameOver();
	showcursor(TRUE);
	return 0;

}