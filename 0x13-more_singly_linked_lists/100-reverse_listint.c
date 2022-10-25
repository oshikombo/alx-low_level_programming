#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to the first node in the list.
 *
 * Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *aux = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	node = *head;
	aux = node->next;
	node->next = NULL;
	while (aux != NULL)
	{
		node = aux;
		aux = node->next;
		node->next = *head;
		*head = node;
	}
	return (node);
}

