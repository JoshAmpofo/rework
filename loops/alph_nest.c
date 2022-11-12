#include <stdio.h>
#include <stdlib.h>

/**
 * main - demonstrate the concept of nested loops 
 * the first loop (let) will print one lowercase letter 
 * the second loop (let_2) will print all uppercase alphabets
 * Return: alphabets
 */
int main(void)
{
	char let, let_2;

	for (let = 97; let <= 122; let++) /* print lowercase alphabet */
	{
		putchar(let);
		putchar('\n');
		for (let_2 = 65; let_2 <= 90; let_2++) /* print uppercase alphabet */
			putchar(let_2);
		putchar('\n');
	}
	putchar('\n');

	return (0);
}
