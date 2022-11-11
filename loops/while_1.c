#include <stdio.h>

/** using the while loop to get input from user
 * loop terminates when a specific character is typed
 *
 * Return: exit loop message
 */
int main(void)
{
	int c;

	c = ' ';
	printf("enter a character:\n(enter x to ext)\n");
	while (c != 'x')
	{
		c = getc(stdin);
		putchar(c);
	}
	printf("\nOut of while loop. Bye!\n");
	return (0);
}
