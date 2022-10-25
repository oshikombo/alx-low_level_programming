#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head pointer to NULL.
 * @head: pointer to pointer to the first node in the listint_t list.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	node = *head;
	while (node->next != NULL)
	{
		*head = node->next;
		free(node);
		node = *head;
	}
	free(node);
	*head = NULL;
}

