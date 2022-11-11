#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char text[30] = "Welcome to Trinidad & Tobago";
	int i;

	for (i = 0; text[i] != '\0'; i++)
		putchar(text[i]);
	putchar('\n');
	return 0;
}
