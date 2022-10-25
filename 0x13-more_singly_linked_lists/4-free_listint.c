#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to first node in the listint_t list.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return;

	node = head;
	while (node->next != NULL)
	{
		head = node->next;
		free(node);
		node = head;
	}
	free(node);
}

