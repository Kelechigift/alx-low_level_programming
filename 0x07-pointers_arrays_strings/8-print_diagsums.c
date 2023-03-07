#include "main.h"

/**
 * print_diagsums - function that prints sum
 * @a: parameter to be printed
 * @size: parameter to be printed
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
