#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates array of char
 * @size: size of memory to print
 * @c: parameter to be printed
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create_array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (create_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}
