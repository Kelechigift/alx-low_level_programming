#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguement
 * @argv: array of string
 * @argc: number of arugments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
