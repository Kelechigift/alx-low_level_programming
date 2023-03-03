#include "main.h"

/**
 * _strcmp - function that compare strings
 * @s1: parameter to be printed
 * @s2: parameter to be printed
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, c_res;

	for (i = 0; s1[i] != '\0')
		i++;
	for (j = 0; s2[j] != '\0')
		j++;
	if (s1[i] == s2[j])
	{
		continue;
	}
	else
	{
		c_res = s1[i] - s2[j];
	}
	return (0);
}
