#include "main.h"

/**
 * _strncat - function that concatenates string
 * @dest: parameter to be printed
 * @src: parameter to be printed
 * @n: parameters to be printed
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j <= n - 1; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
