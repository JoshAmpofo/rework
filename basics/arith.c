#include <stdio.h>

/**
 * this program some arith. op. on two numbers stored in variables
 *
 * Return: 0.
 */
int main (void)
{
	int answer, result; /* declare variables */

	answer = 100; /* store number in variable */
	result = answer - 10; /* arithmetic operation */

	/* print out result and perform another arith op. */
	printf("The result is %i\n", result + 5);

	return (0);
}
