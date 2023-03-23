#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function prints a name
 * @name: name of person
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
