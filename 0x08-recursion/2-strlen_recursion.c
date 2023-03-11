#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a strings
 * @s: parameter to be printed
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s != '\0')
	{
		j++;
		return (j + strlen(s + 1));
	}
	return (j);
}
