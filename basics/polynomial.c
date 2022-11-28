#include <stdio.h>
#include <stdlib.h>

/**
 * This program will evaluate a polynomial
 *
 * Return: result of polynomial
 */
int main(void)
{
	double x = 2.55;
	double result;

	result = 3*(x*x*x) - 5*(x*x) + 6;

	printf("The result of the polynomial is %g\n", result);

	return (0);
}
