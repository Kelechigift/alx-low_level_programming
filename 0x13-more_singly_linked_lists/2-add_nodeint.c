#include "lists.h"

/**
 * add_nodeint - function adds new node at the beginning of listint_t list
 * @head: entry point into a linked list
 * @n: data stored in new node
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
