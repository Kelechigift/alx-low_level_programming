#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list
 * @n: data stored in new node
 * @head: entry point into a linked list
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *lastNode;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = new_node;
	}
	return (new_node);
}
