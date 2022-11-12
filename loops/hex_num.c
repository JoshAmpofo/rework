#include <stdio.h>
#include <stdlib.h>

/**
 * main - convert 0 through 15 to Hex numbers 
 *
 * Return: Always 0.
 */
int main(void)
{
	int hex_num;

	printf("Hex(uppercase)   Hex(lowercase)   Decimal\n");
	for (hex_num = 0; hex_num < 16; hex_num++)
	{
		printf("%X                     %x                %d\n", hex_num, hex_num, hex_num);
	}

	return (0);
}
