#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: parameter to be printed
 * @b: byte value
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
