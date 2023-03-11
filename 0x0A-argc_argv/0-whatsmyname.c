#include "main.h"
#include <stdio.h>

/**
 * main - function prints its nmae
 * @argv: array of string
 * @argc: number of argument
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
