#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets using do-while loop
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 65; 

	do 
	{
		putchar(i);
		i++;
	} while (i <= 90);
	putchar('\n');
	
	return (0);
}
