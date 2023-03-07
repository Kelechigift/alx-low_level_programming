#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;
	char *p3;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (p1 = haystack; *p1 != '\0'; p1++)
	{
		p2 = p1;
		p3 = needle;
		while (*p3 != '\0' && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (*p3 == '\0')
		{
			return (p1);
		}
	}
	return (NULL);
}
