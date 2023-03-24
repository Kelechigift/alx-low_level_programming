#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that search for an integer
 * @size: number of element in array
 * @array: carrys number of element
 * @cmp: pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
	{
		for (i = 0; i <= size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
