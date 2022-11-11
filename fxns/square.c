#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * square_num - find the square of any number
 *
 * Return: the square of numbers
 */
float square_num(float n) 
{
	/* multiply number by itself to get square */
	float result = n * n;
	return (result);
}
int main(void)
{
	/* declare variables */
	float n, result;

	/* Ask user for number */
	printf("Input any number for square: ");
	scanf("%f", &n);

	/* call function to square num */
	result = square_num(n);

	/* return result to screen */
	printf("The square of %.0f is: %.2f\n", n, result);

	return (0);
}
