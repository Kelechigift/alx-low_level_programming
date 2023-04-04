#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: the first node in the list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
