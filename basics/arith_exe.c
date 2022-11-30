#include <stdio.h>

/**
 * main - evaluate an arithmetic expression
 * display result in exponential format
 *
 * Result: 0 on success.
 */
int main(void)
{
	double num_1 = (3.31e-8 * 2.01e-7);
	double num_2 = (7.6e-6 + 2.01e-8);

	double result = num_1 / num_2;

	printf("The result is: %e\n", result);

	return (0);
}
