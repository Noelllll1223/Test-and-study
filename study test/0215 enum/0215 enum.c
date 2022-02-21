#include<stdio.h>

void move(enum origin to)
{
	printf("%d쪽으로 이동합니다.\n", to);
}

void moveChar(enum origin to)
{
	static char* oriname[] = {"동", "서", "남", "북"};
	printf("%d쪽으로 이동합니다.\n", to);

}
int main()
{
	enum origin { EAST, WEST, SOUTH, NORTH };
	enum origin mark = WEST;
	enum origin head = SOUTH;

	move(head);
	moveChar(mark);

}