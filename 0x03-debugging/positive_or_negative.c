#include "main.h"

/**
 * positive_or_negative - check for positive or negative numbers
 * @i: the numbers to be checked
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i >= 0)
		printf("%d is positive\n", i);
}
