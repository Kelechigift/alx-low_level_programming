#include "main.h"
#include <string.h>

/**
 * _strspn - function that get length of a prefix substring
 * @s: the initial segment
 * @accept: parameter to be printed
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_len = strlen(accept);
	int s_len = strlen(s);

	int i;
	int j;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (j == accept_len)
		{
			return (count);
		}
		else
		{
			count++;
		}
	}
	return (count);
}
