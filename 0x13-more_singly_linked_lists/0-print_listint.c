#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - function prints all the elements of a listint_t list
 * @h: pointer points to head node
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;

		h = h->next;
	}
	return (count);
}
