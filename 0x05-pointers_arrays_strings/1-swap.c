#include "main.h"

/**
 * swap_int - function that swap values
 * @a: parameter to be printed
 * @b: parameter to be printed
 *  Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
