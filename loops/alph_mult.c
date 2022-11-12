#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program takes the concept of multi-condition for loop
 * and demonstrates it by printing a mix the lowercase and uppercase letters
 *
 * Return: mix alphabets
 */
int main(void)
{
	char let, let_2;

	for (let = 97, let_2 = 65; let <= 122; let++, let_2++)
	{
		printf("%c%c", let, let_2);
	}
	putchar('\n');

	return (0);
}
