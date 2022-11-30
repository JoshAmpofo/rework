#include <stdio.h>

/**
 * main - round off a set of numbers
 *
 * Return: 0.
 */
int main(void)
{
	long int i, next_multiple;
	int j;

	i = 365;
	j = 7;
	next_multiple = i + j - i % j;
	printf("Next multiple 1 roundoff: %li\n", next_multiple);

	i = 12258;
	j = 23;
	next_multiple = i + j - i % j;
	printf("Next multiple 2 roundoff: %li\n", next_multiple);

	i = 996;
	j = 4;
	next_multiple = i + j - i % j;
	printf("Next multiple 3 roundoff: %li\n", next_multiple);

	return (0);
}
