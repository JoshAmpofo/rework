#include <stdio.h>
#include <stdlib.h>

/**
 * swap_num - swap two numbers
 * @temp_num: to temporarily hold numbers
 *
 * Return: swapped variables
 */
void swap_num(int *a, int *b)
{
	int temp_num;

	/* swap values */
	temp_num = *a; /* store value of a in temp_num */
	*a = *b; /* store value of a in b */
	*b = temp_num; /* store value of temp_num in b */
}
int main(void)
{
	int a, b;

	/* obtain two numbers from user */
	printf("Enter two numbers\n");
	printf("1st Number: ");
	scanf("%d", &a);
	printf("2nd number: ");
	scanf("%d", &b);

	/* call values before swapping */
	printf("Before swapping: 1st num = %d, second num = %d\n", a, b);

	/* call function to swap values */
	swap_num(&a, &b);

	/* return new values */
	printf("After swapping: 1st num = %d, second num = %d\n", a, b);

	return (0);
}
