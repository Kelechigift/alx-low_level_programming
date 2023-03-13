#include "main.h"

/**
 * factorial - function that returns a factorial
 * @n: given number
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = 1;
		int i;

		for (i = 1; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
