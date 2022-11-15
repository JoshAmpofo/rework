/* This program illustrates the structure of a structure in C */
#include <stdio.h>

/**
 * main - start of program
 * struct date - structure to store date
 *
 * Return: date
 */
int main(void)
{
	struct date /* declare struct */
	{ /* declare struct members */
		int month;
		int day;
		int year;
	};

	/* declare variable of datatype struct date */
	struct date today;

	/* populate variable today */
	today.day = 15;
	today.month = 11;
	today.year = 2022;

	/* print struct */
	printf("Today's date is %i/%i/%.2i\n",
			today.day, today.month, today.year % 100);

	return (0);
}
