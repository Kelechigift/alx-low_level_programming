#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function return number of elements in linked listint_t list
 * @h: pointer points to the head of list
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
