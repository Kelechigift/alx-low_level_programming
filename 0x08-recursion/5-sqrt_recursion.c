#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural root
 * sqrt_helper - function that find the natural square root
 * @n: natural square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 0, n / 2 + 1));
}

int sqrt_helper(int n, int min, int max)
{
	int guess = (min + max) / 2;
	int square = guess * guess;

	if (max < min)
	{
		return (-1);
	}
	if (square == n)
	{
		return (guess);
	}
	else if (square > n)
	{
		return (sqrt_helper(n, min, guess - 1));
	}
	else
	{
		return (sqrt_helper(n, guess + 1, max));
	}
}
