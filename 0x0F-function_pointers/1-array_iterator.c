#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function given as parameter
 * @array: parameter to be printed
 * @action: parameter to be printed
 * @size: parameter to be printed
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
