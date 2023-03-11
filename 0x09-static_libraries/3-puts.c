#include "main.h"

/**
 * _puts - function that prints string
 * @str: parameter to be printed
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
