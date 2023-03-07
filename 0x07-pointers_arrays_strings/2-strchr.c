#include "main.h"

/**
 * _strchr- function that locates a character in a string
 * @s: parameter to be printed
 * @c: parameter to be printed
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
