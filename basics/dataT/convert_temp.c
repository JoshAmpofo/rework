#include <stdio.h>
#include <stdlib.h>

/**
 * This program will convert a temp from fahrenheit to celsius
 *
 * Return: celsius temp
 */
int main(void)
{
	int cel_num = 27;
	float celsius;

	celsius = (cel_num - 32) / 1.8;

	printf("%d fahrenheit is %g in degree celsius\n", cel_num, celsius);
	return (0);
}
