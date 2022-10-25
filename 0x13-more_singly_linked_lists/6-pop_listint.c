#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the first node in the listint_t linked list.
 *
 * Return: the head node's data n, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *node = NULL;
	int data;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	node = *head;
	data = node->n;
	*head = node->next;
	free(node);

	return (data);
}

