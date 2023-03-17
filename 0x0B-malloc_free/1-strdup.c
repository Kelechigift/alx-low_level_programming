#include "main.h"
#include <string.h>

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: a copy of the string
 * Return: 0
 */
char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *_strdup = malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (_strdup == NULL)
	{
		return (NULL);
	}
	memcpy(_strdup, str, len);
	return (_strdup);
}

