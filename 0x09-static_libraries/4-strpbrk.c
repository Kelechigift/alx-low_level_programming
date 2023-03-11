#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any st byte
 * @s: parameter to be printed
 * @accept: parameter to be printed
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
