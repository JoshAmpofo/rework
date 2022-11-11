#include <stdio.h>
#include <stdlib.h>

/**
 * main - demonstrating the usage of do-while loop
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 65;

	do {
		printf("The numeric value of %c is %d\n", i, i);
		i++;
	} while (i < 72);

	return (0);
}
