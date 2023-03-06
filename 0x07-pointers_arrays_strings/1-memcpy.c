#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes
 * @src: source code
 * @dest: parameter to be printed
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
