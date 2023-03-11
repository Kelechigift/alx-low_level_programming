#include "main.h"

/**
 * _strlen - function that prints length of string
 *@s: string of value
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
