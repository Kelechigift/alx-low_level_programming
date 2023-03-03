#include "main.h"

/**
 * reverse_array - function that reverse arrays
 * @a: array of integers
 * @n: number of element
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}

}
