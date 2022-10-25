#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 * @head: pointer to pointer to first node in a listint_t list.
 * @n: int value to put in the new node data field.
 *
 * Return: address of the new element in the list, NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	node = *head;
	while (node->next != NULL)
		node = node->next;
	node->next = new;

	return (new);
}

