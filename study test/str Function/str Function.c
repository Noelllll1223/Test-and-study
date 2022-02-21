#include <stdlib.h>
#include <stdio.h>
 
int main()
{
	char cmd[30];
	strcpy(cmd, "dir");
	system(cmd);
}